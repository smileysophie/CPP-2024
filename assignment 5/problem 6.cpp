// Problem 6 - Solution

#include <iostream>
using namespace std;

// function definition
// checks row
char check_row(char board[3][3], int row, int col = 0)
{
    // if all the elements are the same return winner
    if (col == 3)
        return board[row][0];

    // if there is no winner return no winner
    else if (board[row][col] != board[row][0])
        return ' ';

    // recursively calls itself
    return check_row(board, row, col + 1);
}


// function definition
// checks rows
char check_rows(char board[3][3], int row = 0)
{
    // if all rows checked return nothing
    if (row == 3)
        return ' ';

    // calls check row then checks for a winner
    char winner = check_row(board, row);
    if (winner != ' ')
        return winner;

    // recursively calls itself
    return check_rows(board, row + 1);
}

// function definition
// checks column
char check_column(char board[3][3], int col, int row = 0)
{
    // if all the elements are the same return winner
    if (row == 3)
        return board[0][col];

    // if there is no winner return no winner
    else if (board[row][col] != board[0][col])
        return ' ';

    // recursively calls itself
    return check_column(board, col, row + 1);
}

// function definition
// checks columns
char check_columns(char board[3][3], int col = 0)
{
    // if all columns checked return nothing
    if (col == 3)
        return ' ';

    // calls check column then checks for a winner
    char winner = check_column(board, col);
    if (winner != ' ')
        return winner;

    // recursively calls itself
    return check_columns(board, col + 1);
}

// function definition
// checks main diagnol
char check_main_diagnol(char board[3][3], int index = 0)
{
    // if all the elements are the same return winner
    if (index == 3)
        return board[0][0];

    // if there is no winner return no winner
    else if (board[index][index] != board[0][0])
        return ' ';

    // recursively calls itself
    return check_main_diagnol(board, index + 1);
}

// function definition
// checks other diagnol
char check_other_diagnol(char board[3][3], int index = 0)
{
    // if all the elements are the same return winner
    if (index == 3)
        return board[0][2];

    // if there is no winner return no winner
    else if (board[index][2 - index] != board[0][2])
        return ' ';

    // recursively calls itself
    return check_other_diagnol(board, index + 1);
}

// function definition
// checks for empty spaces
bool empty_spaces(char board[3][3], int row = 0, int col = 0)
{
    // if no rows left to check, return false
    if (row == 3)
        return false;
    // moves onto the next row if all cols are done
    else if (col == 3)
        return empty_spaces(board, row + 1, 0);
    // if empty space found, return true
    else if (board[row][col] == ' ')
        return true;

    // checks the next col by recursively calling
    return empty_spaces(board, row, col + 1);

}
// function definition
// determines the winner
char check_winner(char board[3][3])
{
    // declare variables
    char row_winner = check_rows(board);
    char col_winner = check_columns(board);
    char center_diag_winner = check_main_diagnol(board);
    char other_diag_winner = check_other_diagnol(board);

    // returns the winner if it's not empty
    if (row_winner != ' ')
        return row_winner;
    else if (col_winner != ' ')
        return col_winner;
    else if (center_diag_winner != ' ')
        return center_diag_winner;
    else if (other_diag_winner != ' ')
        return center_diag_winner;

    else if (empty_spaces(board))
        return ' ';
    else
        return 'D';

}

int main()
{
    // declare variables
    char board[3][3] = 
    {
        {'O', 'X', 'O'},
        {' ', 'X', ' '},
        {' ', 'O', 'X'}
    };

    // calls check winner to determine the winner
    char result = check_winner(board);

    // outputs the winner
    if (result == 'X' || result == 'O')
        cout << "Winner: " << result << endl;
    else if (result == 'D')
        cout << "Tie" << endl;
    else
        cout << "Winner: None" << endl;

	return 0;
}
