// Problem 18 - Solution
#include <iostream> // library needed for input and output
using namespace std; // set default namespace to std

int main()
{
	// declare variables
	int input = 0;
	int power = 0;
	int result = 0;

	// input
	// prompts user to enter two numbers
	// the number and the power, respectively
	cout << "Please enter number: ";
	cin >> input;
	cout << "Please enter number: ";
	cin >> power;
	result = input;

	// process
	// computes the first number to the power of the second number
	// by using a for loop
	for (int i = 1; i < power; i++)
		result *= input;

	// output
	// outputs the result to the user
	cout << "Result of " << input << " raised to the power of " << power << " is: " << result << endl;

	return 0;
}
