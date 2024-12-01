// Problem 1 - Solution

#include <iostream>
using namespace std;

// function definition
// adds the commission amount to all the values
void add_commission(const float inp_arr[], float out_arr[], const float COMM_PERCENT, const int SIZE, int index)
{
	// if the index number is equal to the size of the array, stop the recursion
	if (index == SIZE)
		return;

	// adds the commission amount to each value in the input array
	// then adds that vaue to the output array
	out_arr[index] = inp_arr[index] * COMM_PERCENT;

	// recursively calls for the next index
	add_commission(inp_arr, out_arr, COMM_PERCENT, SIZE, index + 1);

}

// function definition
// outputs the commission array to the user
void print_array(const float arr[], int index, int size)
{
	// if the index equals the size of the array,
	// stop recursion
	if (index == size)
		return;
	// outputs current element
	cout << arr[index] << " ";

	// recursively calls print_array, passing the next index
	print_array(arr, index + 1, size);

}

int main()
{
	// declare variables
	const int SIZE = 10;
	float inp_arr[SIZE] = { 9, 7, 2, 4, 25, 23, 2, 8, 10, 20 };
	float out_arr[SIZE] = {};
	const float COMM_PERCENT = 1.1;
	int index = 0;

	// calls the add_commission function to add commission to each value
	add_commission(inp_arr, out_arr, COMM_PERCENT, SIZE, index);

	// calls the print commission function to output the new values to the user
	print_array(out_arr, 0, 10);
	cout << endl;

	return 0;
}
