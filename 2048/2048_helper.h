#include <iostream>
#include <random>
#include <iomanip>
using namespace std;

// move_left accepts two arguments of the board and the number of rows
// instructions for what happens when the user selects to move left
void move_left(int board[][5], int numrows = 5)
{
	// loops through each row
	for (int row = 0; row < numrows; row++)
	{
		// loops through each column
		for (int col = 1; col < numrows; col++)
		{
			// for until the movement hits the edge of the board
			for (int l = col; l > 0; l--)
			{
				// if the tile collidied
				if (board[row][l - 1] == 0 && board[row][l] != 0)
				{
					board[row][l - 1] = board[row][l];
					board[row][l] = 0;
				}
				// if the tile collided with another non-blank tile
				else if (board[row][l - 1] == board[row][l] && board[row][l] != 0)
				{
					// doubles the tile that was collided with
					board[row][l - 1] = board[row][l] * 2;
					// resets the tile that collided
					board[row][l] = 0;
				}
				else
				{
					break;
				}
			}
		}
	}

}

// move_right accepts two arguments of the board and the number of rows
// instructions for what happens when the user selects to move right
void move_right(int board[][5], int numrows = 5)
{
	// loops through for each row
	for (int row = 0; row < numrows; row++)
	{
		// loops for each column
		for (int col = 3; col >= 0; col--)
		{
			// for until the movement hits the edge of the board
			for (int r = col; r < 4; r++)
			{
				// if the tile collided
				if (board[row][r + 1] == 0 && board[row][r] != 0)
				{
					board[row][r + 1] = board[row][r];
					board[row][r] = 0;
				}
				// if the tile collided with another non-blank tile
				else if (board[row][r + 1] == board[row][r] && board[row][r] != 0)
				{
					// doubles the tile that was collided with
					board[row][r + 1] = board[row][r] * 2;
					// resets the tile that collided
					board[row][r] = 0;
				}
				else
				{
					break;
				}
			}
		}
	}
}

// move_up accepts two arguments of the board and the number of rows
// instructions for what happens when the user selects to move up
void move_up(int board[][5], int numrows = 5)
{
	// loops through for each column
	for (int col = 0; col < numrows; col++)
	{
		// loops for each row
		for (int row = 1; row < numrows; row++)
		{
			// until the movement hits the edge of the board
			for (int u = row; u > 0; u--)
			{
				// if the tile collided
				if (board[u - 1][col] == 0 && board[u][col] != 0)
				{
					board[u - 1][col] = board[u][col];
					board[u][col] = 0;
				}
				// if the tile collided with another non-blank tile
				else if (board[u - 1][col] == board[u][col] && board[u][col] != 0)
				{
					// doubles the vaue of the tile that was collided with
					board[u - 1][col] = board[u][col] * 2;
					// resets the tile that collided
					board[u][col] = 0;
				}
				else
				{
					break;
				}
			}
		}
	}
}

// move_down accepts two arguments of the board and the number of rows
// instructions for what happens when the user selects to move down
void move_down(int board[][5], int numrows = 5)
{
	// loops for each column
	for (int col = 0; col < numrows; col++)
	{
		// loops for each row
		for (int row = 3; row >= 0; row--)
		{
			// until the movement hits the edge of the board
			for (int d = row; d < 4; d++)
			{
				// if the tile collided
				if (board[d + 1][col] == 0 && board[d][col] != 0)
				{
					board[d + 1][col] = board[d][col];
					board[d][col] = 0;
				}
				// if the tile collided with another non-blank tile
				else if (board[d + 1][col] == board[d][col] && board[d][col] != 0)
				{
					// doubles the value of the tile that was collided with
					board[d + 1][col] = board[d][col] * 2;
					// resets the tile that collided
					board[d][col] = 0;
				}
				else
				{
					break;
				}
			}
		}
	}
}
// check_board accepts two arguments of the board and the flag for if the game is done
// checks the board and see if the game is finished
void check_board(int board[5][5], int& flag)
{
	// declare variables
	flag = 0;
	// loops through each column
	for (int col = 0; col < 5; col++)
	{
		// loops through each row
		for (int row = 0; row < 5; row++)
		{
			// if there exists a non-blank tile
			if (board[row][col] == 0)
			{
				// indicates that the game isn't over
				flag++;
			}
			else if (board[row][col] == board[row + 1][col] && board[row - 1][col] && board[row][col + 1] && board[row][col + 1])
			{
				// indicates that the game isn't over
				flag++;
			}
		}
	}
	// if the game is over, outputs game over to the user
	if (flag == 0)
	{
		cout << "Game Over!";
	}
	return;
}

// print_board accepts two arguments of the board and the number of rows
// outputs the board to the user
void print_board(int board[5][5], int numrows = 5)
{
	cout << endl << "\t-----------------------------------------" << endl;

	// loops through the number of rows
	for (int r = 0; r < numrows; r++)
	{
		// loops through the columns
		for (int c = 0; c < 5; c++)
		{
			// if the board has a numbered tile, it outputs it 
			if (board[r][c] > 0)
				cout << "\t|" << right << setw(6) << setfill(' ') << board[r][c];
			// else it outputs an empty tile
			else
				cout << "\t|" << right << setw(6) << setfill(' ') << " ";

			//cout << board[r][c] << "\t|\t";
		}
		cout << "\t|" << endl;
		cout << "\t-----------------------------------------" << endl;
	}

	cout << "\t" << endl << endl;
}

// insert_random accepts two arguments of the board and the number of rows
// inserts a random number on the board when the player successfully combines two of the same tile
void insert_random(int board[][5], int numrows = 5)
{
	// declares variables
	int r, c;
	int empty_count = 0;

	// loops through the rows
	for (int r = 0; r < numrows; r++)
	{
		// loops through the columns
		for (int c = 0; c < 5; c++)
		{
			// if the tile is blank, it flags it
			if (board[r][c] == 0)
				empty_count++;
		}
	}

	// if there exists a tile that isn't blank
	if (empty_count > 0)
	{
		while (true)
		{
			//generate random location r, c
			r = rand() % numrows;
			c = rand() % numrows;
			//check if empty
			if (board[r][c] == 0)
			{
				//add number randomly {2,4}
				board[r][c] = 2 * (1 + (rand() % 2));
				break;
			}
		}

	}
}
