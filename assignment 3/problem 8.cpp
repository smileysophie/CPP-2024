// Problem 8 - Solution
#include <iostream>
using namespace std;

int main()
{
	// declare variables
	const int SIZE = 10;
	int inp_arr[SIZE] = { 9, 7, 2, 4, 25, 23, 2, 8, 10, 20 };
	int out_arr[SIZE] = {};

	// process

	// rotates the array to the right once
	for (int i = 0; i < SIZE; i++)
	{
		// takes the rightmost value if it's the first index
		if (i == 0)
			out_arr[i] = inp_arr[SIZE - 1];
		// else just adds the prev value
		else
			out_arr[i] = inp_arr[i - 1];

	}
	// outputs the array
	cout << "\nrotate 1: ";
	for (int i = 0; i < SIZE; i++)
		cout << out_arr[i] << " ";



	// rotates the array to the right twice
	for (int i = 0; i < SIZE; i++)
	{
		// takes the second rightmost value if it's the first index
		if (i == 0)
			out_arr[i] = inp_arr[SIZE - 2];
		// takes the  rightmost value if it's the second index
		else if (i == 1)
			out_arr[i] = inp_arr[SIZE - 1];
		// else just adds the prev value
		else
			out_arr[i] = inp_arr[i - 2];

	}
	// outputs the array
	cout << "\nrotate 2: ";
	for (int i = 0; i < SIZE; i++)
		cout << out_arr[i] << " ";



	// rotates the array to the right three times
	for (int i = 0; i < SIZE; i++)
	{
		// takes the third rightmost value if it's the first index
		if (i == 0)
			out_arr[i] = inp_arr[SIZE - 3];
		// takes the second rightmost value if it's the second index
		else if (i == 1)
			out_arr[i] = inp_arr[SIZE - 2];
		// takes the  rightmost value if it's the third index
		else if (i == 2)
			out_arr[i] = inp_arr[SIZE - 1];
		// else just adds the prev value
		else
			out_arr[i] = inp_arr[i - 3];

	}
	// outputs the array
	cout << "\nrotate 3: ";
	for (int i = 0; i < SIZE; i++)
		cout << out_arr[i] << " ";
}
