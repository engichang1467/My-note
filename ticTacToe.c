#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
// https://www.youtube.com/watch?v=pt7XG2pvHa4&index=30&list=PLZ1QII7yudbdFfKY1eKV3x_bag04AMPJq
// past 31 next
/*

int board[25] = {
	:,:,:,:,:
	:,o,-,x,:
	:,x,-,-,:
	:,-,-,-,:
	:,:,:,:,:
}

*/
/*
const int NOUGHT = 1;
const int CROSSES = 2;
const int BORDER = 3;
const int EMPTY = 0;
*/


enum { NOUGHTS, CROSSES, BORDER, EMPTY };
enum { HUMANWIN, COMPWIN, DRAW };

const int ConvertTo25[9] = {
	6,7,8,
	11,12,13,
	16,17,18
};

void InitializeBoard(int *board)
{
	int index = 0;
	for (index = 0; index < 25; index++)
	{
		board[index] = BORDER;
	}

	// set up the empty square of our board
	for (index = 0; index < 9; index++)
	{
		board[ConvertTo25[index]] = EMPTY;
	}
}

void PrintBoard(const int *board)
{
	int index = 0;
	printf("\nBoard:\n");
	for (index = 0; index < 25; index++)
	{
		if (index != 0 && index%5 == 0)
			printf("\n");
		printf("%4d", board[index]);
	}
	printf("\n");
}

// # 2 part 31
void RunGame()
{
	int GameOver = 0;
	int Side = NOUGHTS;
	int LastMoveMade = 0;
	int board[25];

	InitializeBoard(&board[0]);
	PrintBoard(&board[0]);

	while(!GameOver)
	{
		if (Side == NOUGHTS)
		{
			// get move from human, make move on board, change side

		}	
		else
		{
			// get move from computer, make move on board, change side
			PrintBoard(&board[0]);
		}

		// if three in a row exists Game is over

		// if no more moves, game is a draw
	}

}

int main()
{
	/*
	int board[25];
	InitializeBoard(&board[0]);

	PrintBoard(&board[0]);
	*/

	srand(time(NULL));
	RunGame();
	return 0;
}
