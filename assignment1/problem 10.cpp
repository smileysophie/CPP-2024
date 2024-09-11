// Problem 10 Solution

#include <iostream> // library needed for input and output
using namespace std; // set default namespace to std

int main() // starting point of your code
{
	// declare variables
	float minutes = 0.0; // declare a variable of type float named 'minutes', initialized to 0.0
	int seconds = 0.0; // declare a variable of type int named 'seconds', initialized to 0.0

	// input
	cout << "Please enter minutes: "; // print text to ask user for minutes
	cin >> minutes; // get input float value from the user and store into variable ''minutes'


	// process
	seconds = minutes * 60; // computes the number of seconds and stores in variable 'seconds'


	// output
	cout << "Time in seconds: " << seconds << endl; // print result number of seconds to user


	return 0; // return 0 to the caller
}
