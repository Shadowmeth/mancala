#include <stdio.h>
#include <stdlib.h>
#include "board.h"
#include "game.h"

int main(void)
{

	init_board(board);

	int p_turn = 1;
	int input;
	
	while (!game_over(board)) {
	    display_board(board, p_gem_count, c_gem_count, p_turn);
	    get_input(&input, p_turn);

	    while (board[p_turn - 1][input -1] == 0) {
		printf("\nThe position you entered is empty. Re-enter\n");
		get_input(&input, p_turn);
	    }
	    
	    p_turn = (p_turn == 1? 2 : 1); /* p_turn can be only 1 or 2 */
	    rotate_c_clockwise(input, p_turn);
	}


	if (p_gem_count > c_gem_count) {
	    printf("P1 wins!\n");
	} else if (c_gem_count > p_gem_count) {
	    printf("P2 wins\n");
	} else {
	    /* I'm not sure if draw is even possible in this game but just as an extra precaution */
	    printf("Draw\n");
	}
	
	return 0;
}

