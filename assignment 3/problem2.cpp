// Problem 2 - Solution
#include <iostream>
using namespace std;

int main()
{
	// declare variables
	const int SIZE = 10;
	int inp_arr[SIZE] = { 9, 7, 2, 4, 25, 23, 2, 8, 10, 20 };
	int out_arr[SIZE] = {};
	int location = 0;

	// process
	// examines each element one by one
	for (int i = 0; i < SIZE; i++)
	{
		// checks if the number is greater than 10
		if (inp_arr[i] > 10)
		{
			// stores the value in the leftmost location
			out_arr[location] = inp_arr[i];
			location++;
		}
	}
	// output
	// outputs the new output array with the values that are greater than 10
	for (int i = 0; i < SIZE; i++)
		cout << out_arr[i] << " ";

	return 0;
}
