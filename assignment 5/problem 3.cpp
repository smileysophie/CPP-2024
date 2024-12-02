// Problem 3 - Solution
// not finished

#include <iostream>
using namespace std;



// function definition
// initiates recursion
bool find_sub(int inp_arr[], const int SIZE, int target_sum, int start, int& sub_start, int& sub_end, int current_sum = 0, int end = 0)
{
	// if done all, stop recursion
	if (start == SIZE)
		return false;

	// if the current sum matches the target sum
	if (current_sum == target_sum)
	{
		sub_start = start;
		sub_end = end - 1;
		return true;
	}
	// if end index reaches past the target sum
	if (end == SIZE || current_sum > target_sum)
		// calls findsubarray to reset a new start index
		return find_sub(inp_arr, SIZE, target_sum, start + 1, sub_start, sub_end, 0, start + 1);

	// recursively calls itself
	return find_sub(inp_arr, SIZE, target_sum, start, sub_start, sub_end, current_sum + inp_arr[end], end + 1);




}
int main()
{
	// declare variables
	const int SIZE = 10;
	int inp_arr[SIZE] = { 9, 7, 2, 4, 25, 23, 2, 8, 10, 20 };
	int target_sum = 10;
	int sub_start = -1;
	int sub_end = -1;

	// calls the find_sub function to output subarray
	if (find_sub(inp_arr, SIZE, target_sum, 0, sub_start, sub_end))
		cout << "The target sum of " << target_sum << " can be found from start index: " << sub_start << " to the end index: " << sub_end;
	else
		cout << "No subarray found.";

	return 0;
}
