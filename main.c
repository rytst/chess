#include <stdio.h>

#define N_FILES 8
#define N_RANKS 8



typedef enum {
    WHITE,
    BLACK,
} piece_color;

typedef enum {
    PARWN,
    NIGHT,
    BISHO,
    ROOK,
    QUEEN,
    KING,
} piece_name;

typedef enum {
    NONE,
    SOME,
} piece_existence;

typedef struct {
    piece_existence existence;
    piece_color color;
    piece_name name;
} square_state;

square_state board_state[N_RANKS][N_FILES];

int main(void) {
    return 0;
}
