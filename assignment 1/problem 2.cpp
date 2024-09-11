// Problem 2 Solution

#include <iostream> // library needed for input and output
using namespace std; // set default namespace to std

int main() // starting point of your code
{
	// declare variables
	int input = 0; // declare a variable of type integer named 'input', initialized to 0
	int output = 0; // declare a variable of type integer named 'output', initialized to 0

	// input
	cout << "Please enter a number: "; // print this text to ask the user for a number
	cin >> input; // get input integer value from the user and store into the variable named 'input'

	// process
	output = input * 2; // computes the result value of twice the input number and stores it in the variable output

	// output
	cout << "The number " << output << " is double your input number " << input << endl; // prints out the resultant number

	return 0; // return 0 to the callet
}
