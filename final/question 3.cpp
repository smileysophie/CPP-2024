// Question 3 - Solution
#include <iostream>
using namespace std;

int main()
{
	// declare variables
	const int SIZE = 7;
	int input_arr[SIZE] = {1, 3, 2, 1, 4, 2, 1};
	int smallest = 1000000000;
	int largest = 0;
	bool flag = 0;

	// loops through the array
	for (int i = 0; i < SIZE; i++)
	{
		// if the current value is smaller than the smallest current value,
		// redefine the smallest value
		if (input_arr[i] < smallest)
			smallest = input_arr[i];

		// if the current value is greater than the largest current value,
		// redefine the largest value
		else if (input_arr[i] > largest)
			largest = input_arr[i];
	}
	
	// loops from the smallest value to the largest value
	for (int i = smallest; i <= largest; i++)
	{
		// loops through the array looking for the number
		for (int j = 0; j < SIZE; j++)
		{
			// if it finds the number
			if (input_arr[j] == i)
			{
				// outputs the number and a colon if that number hasn't appeared yet
				if (flag == 0)
					cout << i << ": ";

				// outputs a star and sets the flag to true,
				// notifying that the number has been found at least once
				cout << "*";
				flag = 1;
			}
		}
		// if the number was found
		if (flag == 1)
		{
			// sets the flag back to false and outputs a newline
			flag = 0;
			cout << endl;
		}
	}

	return 0;
}
