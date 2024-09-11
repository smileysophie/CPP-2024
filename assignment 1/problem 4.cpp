// Problem 4 Solution

#include <iostream> // library needed for input and output
using namespace std; // set default namespace to std

int main() // starting point of your code
{
	// declare variables
	int num1 = 0; // declare a variable of type integer named 'num1', initialized to 0
	int num2 = 0; // declare a variable of type integer named 'num2', initialized to 0
	bool compare = 0; // declare a variable of type boolean named 'compare', intialized to 0/false

	// input
	cout << "Please enter first number: "; // print this text to ask the user for a number
	cin >> num1; // get input integer value from the user and store into the variable named 'num1'
	cout << "Please enter second number "; // print this text to ask the user for another number
	cin >> num2; // get input integer value from the user and store into the variable named 'num2'

	// process
	compare = num1 == num2; // compares the two numbers inputed by the user and stores in the bool value 'compare'

	// output
	cout << "Result of comparison: " << compare << endl; // prints out the equality of the comparison for the two user inputted integers

	return 0; // return 0 to the caller
}
