// Problem 9 - Solution
#include <iostream>
using namespace std;

int main()
{
	// declare variables
	const int SIZE1 = 3;
	const int SIZE2 = 4;
	int inp_arr[SIZE1][SIZE2] = 
	{
	{ 1, 2, 3, 4 },
	{ 5, 6, 7, 8 },
	{ 9, 10, 11, 12 } 
	};
	int out_arr[SIZE2][SIZE1] = {};

	// process
	// loops through the matrix
	for (int i = 0; i < SIZE2; i++)
	{
		for (int k = 0; k < SIZE1; k++)
			out_arr[i][k] = inp_arr[k][i];
	}

	// output
	// outputs the transpose
	for (int i = 0; i < SIZE2; i++)
	{
		for (int k = 0; k < SIZE1; k++)
			cout << out_arr[i][k] << "\t";
		cout << endl;
	}
}
