// Problem 10 - Solution
// FINISH
#include <iostream>
using namespace std;

int main()
{
	// declare variables
	const int SIZE = 3;
	char ttt_board[SIZE][SIZE] = 
	{
		{'X', 'O', 'X'},
		{'O', 'O', 'X'},
		{'X', 'X', 'X'}
	};
	char winner = 'N';

	// process
	// vertical check
	if (ttt_board[0][0] == ttt_board[0][1] == ttt_board[0][2] || ttt_board[1][0] == ttt_board[1][1] == ttt_board[1][2] || ttt_board[2][0] == ttt_board[2][1] == ttt_board[2][2])
		winner = ttt_board[0][0];
	// horizontal check
	if (ttt_board[0][0] == ttt_board[1][0] == ttt_board[2][0] || ttt_board[0][1] == ttt_board[1][1] == ttt_board[2][1] || ttt_board[0][2] == ttt_board[1][2] == ttt_board[2][2])
		winner = ttt_board[0][0];
	// diagnol check
	if (ttt_board[0][0] == ttt_board[1][1] == ttt_board[1][0] || ttt_board[0][1] == ttt_board[1][1] == ttt_board[2][1] || ttt_board[0][2] == ttt_board[1][2] == ttt_board[2][2])
		winner = ttt_board[1][1];
}
