// Problem 17 - Solution

#include <iostream> // library needed for input and output 
using namespace std; // set default namespace to std

int main() // starting point of your code
{
	// declare variables
	int input1 = 0; // declare a variable of type int named 'input1', intialized to 0
	float square = 0.0; // declare a variable of type float named 'square', intialized to 0

	// input
	cout << "Please enter number: "; // print this text, to ask user for a number
	cin >> input1; // get input integer value from user and store into the variable named as 'input1'

	// process
	square = input1 * input1; // compute the square of the number

	// output
	cout << "Square of " << input1 << " is " << square << endl; // print out the square of the numbers

	return 0; // return 0 to the caller
}
