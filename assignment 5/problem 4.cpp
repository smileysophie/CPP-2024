// Problem 4 - Solution

#include <iostream>
using namespace std;

// function definition
// flips the given array
void flip(int inp_arr[], int out_arr[], int start, const int SIZE)
{
	// if the start index equals the size of the array,
	// stops recursion
	if (start == SIZE)
		return;
	
	// puts the last element of inp_arr at the start of out_arr
	out_arr[start] = inp_arr[SIZE - start - 1];

	// recursivey calls flip array for the next number
	flip(inp_arr, out_arr, start + 1, SIZE);

}

// function definition
// prints the array
void print(int arr[], const int SIZE, int index = 0)
{
	// if the index equals the size of the array,
	// stop recursion
	if (index == SIZE)
		return;

	// outputs the current element
	cout << arr[index] << " ";
	// recursively calls print
	print(arr, SIZE, index + 1);

}
int main()
{
	// declare variables
	const int SIZE = 10;
	int inp_arr[SIZE] = { 9, 7, 2, 4, 25, 23, 2, 8, 10, 20 };
	int out_arr[SIZE];
	int start = 0;

	// calls the add_commission function to add commission to each value
	flip(inp_arr, out_arr, start, SIZE);

	// outputs the array by calling print
	print(out_arr, SIZE);

	return 0;
}
