// Problem 3 - Solution
// not finished

#include <iostream>
using namespace std;

// function definition
// finds subarray with a given sum
void find_sub_recursive(int inp_arr[],  const int SIZE, int end, int target_sum, int current_sum, bool found, int start)
{
	
	// if the index number is equal to the size of the array, stop the recursion
	if (end == SIZE)
		return;

	// add the current element to the current sum
	current_sum += inp_arr[end];
	cout << current_sum << endl;

	// if the current sum equals the target sum
	if (current_sum == target_sum)
	{
		// outputs sum and where subarray is found
		cout << "The target sum of " << target_sum << " can be found from start index " << start << " to end index " << end;
		// sets the found flag to true
		found = true;
		// stops recursion
		return;
	}

	// if the current sum is greater than the target sum
	// try again
	if (current_sum > target_sum)
		find_sub_recursive(inp_arr, SIZE, end, target_sum, current_sum, found, start +1);
	else
		// moves on to the next element
		find_sub_recursive(inp_arr, SIZE, end + 1, target_sum, current_sum, found, start);

}

// function definition
// initiates recursion
void find_sub(int inp_arr[], int target_sum, const int SIZE)
{
	// declares variable
	bool found = 0;
	
	// calls find_sub_recursive to determine if substring was found
	find_sub_recursive(inp_arr, SIZE, 0, target_sum, 0, found, 0);

	// if the subarray is not found
	if (!found)
		cout << "No subarray was found.";

}
int main()
{
	// declare variables
	const int SIZE = 10;
	int inp_arr[SIZE] = { 9, 7, 2, 4, 25, 23, 2, 8, 10, 20 };
	int target_sum = 10;

	// calls the add_commission function to add commission to each value
	find_sub(inp_arr, target_sum, SIZE);

	return 0;
}
