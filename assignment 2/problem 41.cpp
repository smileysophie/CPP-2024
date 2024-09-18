// Problem 41 - Solution

#include <iostream> // library needed for input and output
using namespace std; // set default namespace to std

int main()
{
	// declare variables
	float average = 0; // variable to keep track of the average of the user provided numbers
	int input = 0; // variable to store user inputted number
	int count = 0;

	// input and process
	// while loop that loops until negative number is entered
	while (input >= 0)
	{
		// adds the number the user provided to the average
		average += input;

		// adds one to the counter
		count++;

		// asks the user for a number as input
		cout << "Please enter number " << count << ": ";
		cin >> input;


	}

	// more process
	// computes the average of the user provided numbers
	average /= (count - 1);

	// output
	// outputs the average of the user provided numbers
	cout << "The average of numbers is: " << average << endl;

	return 0;
}
