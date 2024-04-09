#include <stdio.h>
#include "defs.h"

void init_board(square_state board_state[N_RANKS][N_FILES]);
void print_board(square_state board_state[N_RANKS][N_FILES]);

int main(void) {
	  square_state board_state[N_RANKS][N_FILES];
	  init_board(board_state);
    print_board(board_state);
    return 0;
}

