// Problem 4 - Solution
#include <iostream>
using namespace std;

// flips a given array
// stores the results in an output array
// outputs the results

int main()
{
	// declare variables
	const int SIZE = 10;
	int inp_arr[SIZE] = { 9, 7, 2, 4, 25, 23, 2, 8, 10, 20 };
	int out_arr[SIZE] = {};

	// process
	// loops through the input array
	for (int i = 0; i < SIZE; i++)
		// adds to the output array backwards from the input array
		out_arr[i] = inp_arr[SIZE-(i+1)];

	// output
	// outputs the new output array
	for (int i = 0; i < SIZE; i++)
		cout << out_arr[i] << " ";

	return 0;
}
