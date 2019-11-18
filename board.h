#ifndef __BOARD_H
#define __BOARD_H

void init_board(unsigned int board[2][6])
{
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 6; j++)
			board[i][j] = 4;
}

/* game_over: returns 1 if the game is over, 0 otherwise */
int game_over(unsigned int board[2][6])
{
    /* The game is over if [0][0-5] = 0 or [1][0-5] = 0 */

    int i;
    for (i = 0; i < 6; i++)
	if (board[0][i] != 0) { /* Player side is empty */
	    return 0;
	}

    for (i = 0; i < 6; i++)
	if (board[1][i] != 0) { /* Computer side is empty */
	    return 0;
	}

    return 1;
}

/* display_board: pretty print the board */
void display_board(unsigned int board[][6], int p_gem_cnt, int c_gem_cnt, int p_turn)
{
    printf("-----------------------------------------------------------\n");
    printf("|\t%2d\t%2d\t%2d\t%2d\t%2d\t%2d\t  |\n", board[1][0], board[1][1], board[1][2], board[1][3], board[1][4], board[1][5]);
    printf("|\t\t\t\t\t\t\t  |\n");
    printf("|%2d\t------------------------------------------\t%2d|\n", c_gem_cnt, p_gem_cnt);
    printf("|\t\t\t\t\t\t\t  |\n");
    printf("|\t%2d\t%2d\t%2d\t%2d\t%2d\t%2d\t  |\n", board[0][0], board[0][1], board[0][2], board[0][3], board[0][4], board[0][5]);
    printf("-----------------------------------------------------------\n");
    printf("        [1]     [2]     [3]     [4]     [5]     [6] --- P%d\n", p_turn);
    
}

#endif


