// Problem 5 - Solution
#include <iostream>
using namespace std;

int main()
{
	// declare variables
	const int SIZE = 10;
	int inp_arr[SIZE] = { 9, 7, 2, 4, 25, 23, 2, 8, 10, 20 };
	int out_arr[SIZE] = {};
	bool notprime = 0;
	int index = 0;

	// process
	// loops through the array
	// looking for primes
	for (int i = 0; i < SIZE; i++)
	{
		notprime = 0;
		// checks if the number can be divided from up to half of that value
		for (int j = 2; j < inp_arr[i]; j++)
		{
			if (inp_arr[i] == 2)
				notprime = 0;
			else if (inp_arr[i] % j == 0)
				notprime = 1;

		}
		// if the value is prime, adds it to out_arr
		if (notprime == 0)
		{
			// appends the value to out_arr in an empty slot
			out_arr[index] = inp_arr[i];
			index++;
		}
	}

	// output
	// outputs out_arr containing all of the primes
	for (int i = 0; i < SIZE; i++)
		cout << out_arr[i] << " ";
	

}
