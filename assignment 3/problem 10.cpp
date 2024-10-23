// Problem 10 - Solution
#include <iostream>
using namespace std;

int main()
{
	// declare variables
	const int SIZE = 3;
	char ttt_board[SIZE][SIZE] =
	{
		{'O', 'X', 'X'},
		{'X', 'X', ' '},
		{'O' , 'O', 'O'}
	};
	char winner = 'N';
	 
	// process
	// determines if anyone has won, if statements are sorted by game tiles
	if (ttt_board[0][0] == ttt_board[0][1] && ttt_board[0][1] == ttt_board[0][2] || ttt_board[0][0] == ttt_board[1][0] && ttt_board[1][0] == ttt_board[2][0] || ttt_board[0][0] == ttt_board[1][1] && ttt_board[1][1] == ttt_board[2][2])
		winner = ttt_board[0][0];
	else if (ttt_board[2][0] == ttt_board[1][1] && ttt_board[1][1] == ttt_board[0][2] || ttt_board[1][0] == ttt_board[1][1] && ttt_board[1][1] == ttt_board[1][2] || ttt_board[0][1] == ttt_board[1][1] && ttt_board[1][1] == ttt_board[2][1])
		winner = ttt_board[1][1];
	else if (ttt_board[2][0] == ttt_board[2][1] && ttt_board[2][1] == ttt_board[2][2] || ttt_board[0][2] == ttt_board[1][2] && ttt_board[1][2] == ttt_board[2][2])
		winner = ttt_board[2][2];
	else
		winner = 'N';

	// outputs the winner
	if (winner == 'N')
		cout << "Winner: None";
	else
		cout << "Winner: " << winner;
}
