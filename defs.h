#define N_FILES 8
#define N_RANKS 8

// piece color
typedef enum {
    WHITE,
    BLACK,
} piece_color;

// piece
typedef enum {
    PARWN,
    NIGHT,
    BISHO,
    ROOK,
    QUEEN,
    KING,
} piece_name;

// is there any piece?
typedef enum {
    NONE,
    SOME,
} piece_existence;

typedef struct {
    piece_existence existence;
    piece_color color;
    piece_name name;
} square_state;

