// Problem 2 - Solution

#include <iostream> // library needed for input and output 
using namespace std; // set default namespace to std

int main() // starting point of your code
{
	// declare variables
	float input = 0.0; // declare a variable of type float named 'input', initialized to 0.0
	float output = 0.0; // declare a variable of type float named 'output', initialized to 0.0

	// input
	cout << "Please enter a number: "; // print this text to ask the user for a floating point number
	cin >> input; // get input floating point value from the user and store into the variable named 'input'

	// process
	output = input * 2.0; // computes the result value of twice the input number and stores it in the variable output

	// output
	cout << "The number " << output << " is double your input number " << input << endl; // prints out the resultant number

	return 0; // return 0 to the caller
}
