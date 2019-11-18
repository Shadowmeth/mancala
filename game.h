#ifndef __GAME_H
#define __GAME_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

unsigned int p_gem_count = 0;
unsigned int c_gem_count = 0;

unsigned int board[2][6];

/* get a valid number input (1-6) and store it in *inp */
/* en-enter the number if the position is empty */
void get_input(int *inp, const int p_t)
{
    do {
	printf("\nPlayer %s turn: ", p_t == 1? "one\'s" : "two\'s");
	scanf("%d", inp); /* inp is already a pointer */
    } while (*inp < 1 || *inp > 6);
    
}

void rotate_c_clockwise(int input, int p_turn)
{
    int count = board[p_turn - 1][input - 1];
    
    if (p_turn == 1) {
	/* go from left to right starting at board[0][input - 1] until count turns 0 */
	while (count > 0) {
	    
	}
    }

}

#endif
