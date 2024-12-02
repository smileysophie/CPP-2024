// Problem 5 - Solution

#include <iostream>
using namespace std;

// function definition
// transposes the matrix
void transpose( int inp_arr[3][4], int out_arr[4][3], int row, int col)
{
	// if all rows have been outputted, stop recursion
	if (row == 3)
		return;
	// if all columns in the current row have been dealt with,
	// call transpose recursively to move on
	if (col == 4)
	{
		transpose(inp_arr, out_arr, row + 1, 0);
		return;
	}
	// assigns the transposed value
	out_arr[col][row] = inp_arr[row][col];

	// recursively calls transpose to move on
	transpose(inp_arr, out_arr, row, col + 1);
}

// function definition
// outputs the matrix
void print(int arr[][3], int row = 0, int col = 0)
{
	// if all rows are outputted, stop recursion
	if (row == 4)
		return;
	// if all columns are outputted, move on to next row
	if (col == 3)
	{
		cout << endl;
		print(arr, row + 1, 0);
		return;
	}
	// outputs the current element
	cout << arr[row][col] << " ";

	// recursively calls print to move to next column
	print(arr, row, col + 1);
}

int main()
{
	// declare variables
	int inp_arr[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};
	int out_arr[4][3];

	// calls transpose to transpose matrix
	transpose(inp_arr, out_arr, 0, 0);

	// calls print to output the matri
	print(out_arr);

	return 0;
}
