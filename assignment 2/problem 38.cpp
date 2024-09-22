// Problem 38 - Solution
#include <iostream> // library needed for input and output
using namespace std; // set default namespace to std

int main()
{
	// declare variables
	int input = 0;
	int temp = 0;
	int reverse = 0;

	// input
	// prompts user to enter integer
	cout << "Please enter number: ";
	cin >> input;
	temp = input;

	// process
	while (temp != 0)
	{
		// gets each digit of the integer
		reverse = (reverse * 10) + (temp % 10);
		// divides by 10 each time to get a different digit
		temp = temp / 10;
	}

	// more process and output
	// determines if the two numbers are the same
	if (reverse == input)
		cout << "The number is a palindrome\n";
	else
		cout << "The number is not a palindrome\n";

	return 0;
}
