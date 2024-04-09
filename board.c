#include <stdio.h>
#include "defs.h"

// init pawn lines
void init_pawn(piece_color color, int rank, square_state state[N_RANKS][N_FILES]) {
    for (int i=0; i < N_FILES; i++) {
        state[rank][i].color = color;
        state[rank][i].name = PAWN;
    }
}

void init_pieces(piece_color color, int rank, square_state state[N_RANKS][N_FILES]) {
    for (int i=0; i < N_FILES; i++) {
        state[rank][i].color = color;
    }
 
    state[rank][0].name = ROOK;
    state[rank][1].name = NIGHT;
    state[rank][2].name = BISHOP;
    state[rank][3].name = QUEEN;
    state[rank][4].name = KING;
    state[rank][5].name = BISHOP;
    state[rank][6].name = NIGHT;
    state[rank][7].name = ROOK;

}

void init_board(square_state state[N_RANKS][N_FILES]) {
    // set all squares NONE
    for (int i=0; i < N_RANKS; i++) {
        for (int j=0; j < N_FILES; j++) {
            state[i][j].color = -1;
            state[i][j].name = -1;
        }
    }
 
    // BLACK pawn line
    init_pawn(BLACK, 1, state);
    // WHITE pawn line
    init_pawn(WHITE, 6, state);

    // BLACK pieces line
    init_pieces(BLACK, 0, state);
    // WHITE pieces line
    init_pieces(WHITE, 7, state);
}

// print chess board
void print_board(square_state state[N_RANKS][N_FILES]) {
    printf("+---+---+---+---+---+---+---+---+\n");
    for (int i=0; i < N_RANKS; i++) {
        putchar('|');
        for (int j=0; j < N_FILES; j++) {
            if (state[i][j].color == BLACK) {
                switch (state[i][j].name) {
                    case PAWN:
                        printf("-P ");
                        break;
                    case NIGHT:
                        printf("-N ");
                        break;
                    case BISHOP:
                        printf("-B ");
                        break;
                    case ROOK:
                        printf("-R ");
                        break;
                    case QUEEN:
                        printf("-Q ");
                        break;
                    case KING:
                        printf("-K ");
                        break;
                }
            } else if (state[i][j].color == WHITE) {
                switch (state[i][j].name) {
                    case PAWN:
                        printf(" P ");
                        break;
                    case NIGHT:
                        printf(" N ");
                        break;
                    case BISHOP:
                        printf(" B ");
                        break;
                    case ROOK:
                        printf(" R ");
                        break;
                    case QUEEN:
                        printf(" Q ");
                        break;
                    case KING:
                        printf(" K ");
                        break;
                }
            } else {
                printf("   ");
            }
            putchar('|');
        }
        putchar('\n');
        printf("+---+---+---+---+---+---+---+---+\n");
    }
}


