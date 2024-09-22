// Question 1 - Solution
#include <iostream> // library needed for input and output
using namespace std; // set default namespace to std

int main()
{
	// declare variables
	int input1 = 0;
	int input2 = 0;
	int input3 = 0;
	int lowest = 0;
	int middle = 0;
	int highest = 0;

	// input
	// asks user for three numbers
	cout << "Please enter number 1: ";
	cin >> input1;
	cout << "Please enter number 2: ";
	cin >> input2;
	cout << "Please enter number 3: ";
	cin >> input3;

	// process

	// if input 1 is the highest
	if (input1 >= input2 && input1 >= input3)
	{
		highest = input1;

		// if input2 is the middle
		if (input2 >= input3)
		{
			middle = input2;
			lowest = input3;
		}
		// if input 2 is the lowest
		else
		{
			middle = input3;
			lowest = input2;
		}
	}
	// if input 2 is the highest
	else if (input2 >= input1 && input2 >= input3)
	{
		highest = input2;

		// if input1 is the middle
		if (input1 >= input3)
		{
			middle = input1;
			lowest = input3;
		}
		// if input1 is the lowest
		else
		{
			middle = input3;
			lowest = input1;
		}
	}
	// if input3 is the highest
	else
	{
		highest = input3;

		// if input1 is the middle
		if (input1 >= input2)
		{
			middle = input1;
			lowest = input2;
		}
		// if input 1 is the lowest
		else
		{
			middle = input2;
			lowest = input1;
		}
	}

	// output
	// outputs the numbers in increasing order
	cout << lowest << " " << middle << " " << highest << endl;


	return 0;
}
