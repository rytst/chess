#define N_FILES 8
#define N_RANKS 8

// piece color
typedef enum {
    WHITE,
    BLACK,
    NONE,
} piece_color;

// piece
typedef enum {
    PAWN,
    NIGHT,
    BISHOP,
    ROOK,
    QUEEN,
    KING,
} piece_name;


typedef struct {
    piece_color color;
    piece_name name;
} square_state;

