// Problem 36 - Solution
#include <iostream> // library needed for input and output
using namespace std; // set default namespace to std

int main()
{
	// declare variables
	int input = 0;
	int num1 = 0;
	int num2 = 0;
	int sum = 0;


	// input and process
	for (int i = 1; i < 6; i++)
	{
		// gets a number from the user as input
		cout << "Please enter number " << i << ": ";
		cin >> input;
		// determines if it's the largest number
		if (input > num1)
		{
			num2 = num1;
			num1 = input;
		}
		else if (input > num2)
			num2 = input;
	}

	// calculates the largest sum
	sum = num1 + num2;

	// outputs the two numbers which form the largest sum
	cout << "Numbers " << num1 << " and " << num2 << " form the largest sum: " << sum;


	return 0;
}
