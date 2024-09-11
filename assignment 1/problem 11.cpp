// Problem 11 Solution

#include <iostream> // library needed for input and output
using namespace std; // set default namespace to std

int main() // starting point of your code
{
	// declare variables
	float hours = 0.0; // declare a variable of type float named 'hours', initialized to 0.0
	int seconds = 0.0; // declare a variable of type int named 'seconds', initialized to 0.0

	// input
	cout << "Please enter hours: "; // print text to ask user for hours
	cin >> hours; // get input float value from the user and store into variable ''hours'


	// process
	seconds = hours * 60 * 60; // computes the number of seconds and stores in variable 'seconds'


	// output
	cout << "Time in seconds: " << seconds << endl; // print result number of seconds to user


	return 0; // return 0 to the caller
}
