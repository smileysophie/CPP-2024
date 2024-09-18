// Problem 37 - Solution
#include <iostream> // library needed for input and output
using namespace std; // set default namespace to std

int main()
{
	// declare variables
	int input = 0;
	int reverse = 0;


	// input
	// get a number from the user as input
	cout << "Please enter number: ";
	cin >> input;
	reverse = input;

	// pre outputting text
	cout << "Reverse of number: ";

	// process and output
	// reverse the integer's digits order
	// loops through the number of digits in the integer
	while (reverse)
	{
		// gets the modulus of the integer divided by 10 every time, 
		// outputting the digit in the ones place
		cout << reverse % 10;
		// removes the digit in the ones place by dividing the integer by 10
		reverse /= 10;
	}



	return 0;
}
