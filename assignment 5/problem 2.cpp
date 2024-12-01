// Problem 2 - Solution

#include <iostream>
using namespace std;

// function definition
// filters all numbers greater than 10 from the input array
void filter(const float inp_arr[], float out_arr[], const int SIZE, int index, int temp)
{
	// if the index number is equal to the size of the array, stop the recursion
	if (index == SIZE)
		return;

	// if the current number in the array is greater than 10,
	// append it to out_arr
	if (inp_arr[index] > 10)
	{
		out_arr[temp] = inp_arr[index];
		temp++;
		
	}

	// recursively calls for the next index
	filter(inp_arr, out_arr, SIZE, index + 1, temp);

}

// function definition
// outputs the array to the user
void print_array(const float arr[], int index, const int SIZE)
{
	// if the index equals the size of the array,
	// stop recursion
	if (index == SIZE)
		return;
	// outputs current element
	cout << arr[index] << " ";

	// recursively calls print_array, passing the next index
	print_array(arr, index + 1, SIZE);

}

int main()
{
	// declare variables
	const int SIZE = 10;
	float inp_arr[SIZE] = { 9, 7, 2, 4, 25, 23, 2, 8, 10, 20 };
	float out_arr[SIZE] = {};
	int index = 0;
	int temp = 0;

	// calls the add_commission function to add commission to each value
	filter(inp_arr, out_arr, SIZE, index, temp);

	// calls the print commission function to output the new values to the user
	print_array(out_arr, index, SIZE);
	cout << endl;

	return 0;
}
