// Problem 3 - Solution
#include <iostream>
using namespace std;

// finds a continguous subarray that adds to the given sum

int main()
{
	// declare variables
	const int SIZE = 10;
	int inp_arr[SIZE] = { 9, 7, 2, 4, 25, 23, 2, 8, 10, 20 };
	int target_sum = 18;
	int start_index = 0;
	int end_index = 0;
	int temp = 0;
	int count = 0;

	// processs
	// loops through the array
	// looking for a coninguous subarray that adds up to the target sum
	temp = 0;

	while (count < SIZE)
	{
		// if the current substring is greater than the target sum
		if (temp + inp_arr[count] > target_sum)
		{
			// resets the indexes
			end_index = 0;
			start_index = count;
			temp = inp_arr[count];
		}

		// if the current substring equals the target sum
		else if (temp + inp_arr[count] == target_sum)
		{
			// the end index is updated and the done flag is hoisted
			end_index = count;
			count = 10000;
		}
		// if neither is true
		else
			// updates the temp value
			temp += inp_arr[count];

		// increments the counter
		count++;
	}

	// output
	if (end_index != 0)
		cout << "The target sum of " << target_sum << " can be found from start index " << start_index << " to the end index " << end_index << endl;
	else
		cout << "The target sum of " << target_sum << " can not be found.";
	return 0;
}
