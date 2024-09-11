// Problem 21 Solution

#include <iostream> // library needed for input and output
using namespace std; // set default namespace to std

int main() // starting point of your code
{
	// declare variables
	int num = 0;

	// input
	// gets input from the user for a number to count up to
	cout << "Please enter number: ";
	cin >> num;

	// process
	cout << "Counting up\n";

	// loops until the counter reaches the user defined max
	for (int count = 1; count <= num; count++) 
		// output
		// outputs the current number the counter is on
		cout << "Counter is " << count << " of " << num << endl;

	return 0; // return 0 to the caller
}
