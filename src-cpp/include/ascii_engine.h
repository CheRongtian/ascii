#pragma once

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AsciiPiece AsciiPiece;
typedef struct AsciiCancellation AsciiCancellation;

typedef struct {
    // Logo glint interval in seconds; 0 keeps the logo still.
    double shine;
    // Distribution logo scan interval in seconds; 0 keeps it still.
    double scan;
    // JSON overrides for the serializable options used by other pieces.
    const char *json;
    // Optional shared cancellation state. Safe to cancel from another thread.
    AsciiCancellation *cancellation;
} AsciiPieceOptions;

// Strings are UTF-8. Metadata and palette pointers live for the process lifetime.
// Palette entries are packed 0xRRGGBB values; a missing ground/palette is NULL.
typedef struct {
    const char *id;
    const char *name;
    const char *category;
    const char *note;
    int32_t cols;
    int32_t rows;
    int32_t fps;
    int32_t cell;
    int32_t clock;
    const char *ground;
    const uint32_t *palette;
    size_t palette_count;
    AsciiPieceOptions options;
    double loop;
    double still;
} AsciiPieceMeta;

// Borrowed output, valid until the next render or destruction of this instance.
// Text is UTF-16, including row separators. Colors contain one index per cell.
typedef struct {
    const uint16_t *text;
    size_t text_length;
    const uint8_t *colors;
    size_t color_count;
} AsciiFrame;

size_t ascii_piece_count(void);
const AsciiPieceMeta *ascii_piece_meta_at(size_t index);
const AsciiPieceMeta *ascii_piece_find(const char *id);

// Creation starts at the original initial state, including simulation warmup.
// Use an instance on one serial queue. It may be retained between selections.
// Destroy it when evicting it from the cache or restarting from the beginning.
// Pass NULL options to use the registered defaults for this piece.
AsciiPiece *ascii_piece_create(const char *id, const AsciiPieceOptions *options);
AsciiCancellation *ascii_cancellation_create(void);
void ascii_cancellation_cancel(AsciiCancellation *cancellation);
void ascii_cancellation_destroy(AsciiCancellation *cancellation);
void ascii_piece_destroy(AsciiPiece *piece);
// Rebind cancellation on the instance's serial queue, between render calls.
void ascii_piece_set_cancellation(AsciiPiece *piece, AsciiCancellation *cancellation);
int32_t ascii_piece_render(AsciiPiece *piece, double time, int32_t paper,
                           int32_t colored, AsciiFrame *output);

// Metadata lookup and creation return NULL on failure; render returns 0.
// Read the error on the same thread before the next lookup/create/render;
// the caller copies the message.
const char *ascii_engine_last_error(void);

#ifdef __cplusplus
}
#endif
