// Problem 7 - Solution
#include <iostream>
using namespace std;

int main()
{
	// declare variables
	const int SIZE = 10;
	int inp_arr[SIZE] = { 9, 7, 2, 4, 25, 23, 2, 8, 10, 20 };
	int out_arr[SIZE] = {};
	int total = 0;

	// process
	// loops through the array
	for (int i = 0; i < SIZE; i++)
		// adds each inp_arr value to total
		total += inp_arr[i];
	// loops through the input array again
	for (int i = 0; i < SIZE; i++)
	{
		// adds that new value to the output array
		out_arr[i] = total;
		// subtracts the total from the current value
		total -= inp_arr[i];
	}
	
	// output
	// outputs the array with the reverse cumulative sum of imp_arr
	for (int i = 0; i < SIZE; i++)
		cout << out_arr[i] << " ";
}
