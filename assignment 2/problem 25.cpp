// Problem 25 - Solution
#include <iostream> // library needed for input and output
using namespace std; // set default namespace to std

int main()
{
	// declare variables
	int input1 = 0;
	int input2 = 0;

	// input
	// prompts user to enter two numbers
	cout << "Please enter first number: ";
	cin >> input1;
	cout << "Please enter second number: ";
	cin >> input2;

	// process and output
	// determines if the first number is a multiple of the second number
	// and outputs it to the user
	if (input1 % input2 == 0)
		cout << "Number " << input1 << " is a multiple of " << input2;
	else
		cout << "Number " << input1 << " is not a multiple of " << input2;

	return 0;
}
