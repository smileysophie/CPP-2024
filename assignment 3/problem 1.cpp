// Problem 1 - Solution
#include <iostream>
using namespace std;

// adds 10% commission to an array of values
// stores the results in an output array
// outputs the results

int main()
{
	// declare variables
	const int SIZE = 10;
	const float PERCENT = .1;
	float inp_arr[SIZE] = { 9, 7, 2, 4, 25, 23, 2, 8, 10, 20 };
	float out_arr[SIZE] = {};
	float value = 0;

	// process
	// adds 10 percent commission to the input array
	// by looping through it
	for (int i = 0; i < SIZE; i++)
	{
		// uses the var value as a placeholder to perform the calculation
		value = inp_arr[i];
		value *= PERCENT;
		value += inp_arr[i];

		// adds the new value to the output array
		out_arr[i] = value;
	}

	// output
	// outputs the new array results
	for (int i = 0; i < SIZE; i++)
		cout << out_arr[i] << " ";

	return 0;
}
