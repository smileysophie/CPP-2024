// Problem 16 - Solution

#include <iostream> // library needed for input and output 
using namespace std; // set default namespace to std

int main() // starting point of your code
{
	// declare variables
	float input1 = 0.0; // declare a variable of type float named 'input1', intialized to 0.0
	float input2 = 0.0; // declare a variable of type float named 'input2', intialized to 0.0
	float result = 0; // declare a variable of type float named 'result', intialized to 0

	// input
	cout << "Please enter first number: "; // print this text, to ask user for a number
	cin >> input1; // get input floating point value from user and store into the variable named as 'input1'
	cout << "Please enter second number: "; // print this text to ask user for another number
	cin >> input2; // get input floating point value from user and store into the variable named 'input2'

	// process
	result = (input1 * input1 * input1) + (input2 * input2 * input2) + 3 * (input1 * input1 * input2) + 3 * (input1 * input2 * input2); // compute the value of the formula

	// output
	cout << "Result: " << result << endl; // print out the result

	return 0; // return 0 to the caller
}
