// Problem 7 Solution

#include <iostream> // library needed for input and output
using namespace std; // set default namespace to std

int main() // starting point of your code
{
	// declare variables
	float num1 = 0.0; // declare a variable of type float named 'num1', initialized to 0.0
	float num2 = 0.0; // declare a variable of type float named 'num2', intitialized to 0.0
	bool equality = 0; // declare a variable of type bool named 'equality', initialized to 0/false
	bool nonequality = 0; // declare a variable of type bool named 'nonequality', initialized to 0/false
	bool lessthan = 0; // declare a variable of type bool named 'lessthan', initialized to 0/false
	bool greaterthan = 0; // declare a variable of type bool named 'greaterthan', initialized to 0/false
	bool lessthanequal = 0; // declare a variable of type bool named 'lessthanequal', initialized to 0/false
	bool greaterthanequal = 0; // declare a variable of type bool named 'greaterthanequal', initialized to 0/false

	// input
	cout << "Please enter first number (X): "; // print this text to ask the user for a number
	cin >> num1; // get input float value from the user and store into the variable named 'num1'
	cout << "Please enter second number (Y): "; // print this text to ask the user for another number
	cin >> num2; // get input float value from the user and store into the variable named 'num2'

	// process
	equality = num1 == num2; // computes the result of an equality check and stores in the variable 'equality'
	nonequality = num1 != num2; // computes the result of a non-equality check and stores in the variable 'nonequality'
	lessthan = num1 < num2; // computes the result of a less than check and stores in the variable 'lessthan'
	greaterthan = num1 > num2; // computes the result of a greater than check and stores in the variable 'greaterthan'
	lessthanequal = num1 <= num2; // computes the result of a less than or equal check and stores in the variable 'lessthanequal'
	greaterthanequal = num1 >= num2; // computes the result of a greater than or equal check and stores in the variable 'greaterthanequal'

	// output
	cout << "Equality check (X == Y): " << equality << endl; // prints out the result of equality check
	cout << "Non-equality check (X != Y): " << nonequality << endl; // prints out the result of non-equality check
	cout << "Less than check (X < Y): " << lessthan << endl; // prints out the result of less than check
	cout << "Greater than check (X > Y): " << greaterthan << endl; // prints out the result of greater than check
	cout << "Less than or equal check (X <= Y): " << lessthanequal << endl; // prints out the result of less than or equal check
	cout << "Greater than or equal check (X >= Y): " << greaterthanequal << endl; // prints out the result of greater than or equal check


	return 0; // return 0 to the caller
}
