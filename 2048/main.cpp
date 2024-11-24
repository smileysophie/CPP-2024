#include "2048_helper.h"
#include <iostream>
#include <random>
#include <iomanip>
using namespace std;

int main()
{
	// declare variables
	int size = 5;
	int board[5][5] = {
		{0, 4, 2, 4, 0},
		{0, 0, 0, 0, 0},
		{2, 0, 2, 0, 2},
		{0, 0, 2, 0, 0},
		{2, 2, 2, 2, 2},
	};
	int game_over = 1;
	//while getch == x loop for up down left right

	// outputs the initial gameboard to the user
	cout << "Initial Board : [5x5] :" << endl;
	print_board(board);

	// process
	char choice = 'u';	//initialized
	while (choice != 'e' && game_over != 0)
	{
		// input
		// prompts user to enter a move choice
		cout << "Please enter choice:{u,d,l,r,e} for UP, DOWN, LEFT, RIGHT, Exit: " << endl;
		cout << "Choice: ";
		cin >> choice;

		if (choice == 'u')
		{
			move_up(board, size);
		}
		else if (choice == 'd')
		{
			move_down(board, size);
		}
		else if (choice == 'l')
		{
			move_left(board, size);
		}
		else if (choice == 'r')
		{
			move_right(board, size);
		}

		// calls functions to add a random 2 to the board, output the board, then check for game over
		insert_random(board, size);
		print_board(board);
		check_board(board, game_over);

	}


	return 0;
}
