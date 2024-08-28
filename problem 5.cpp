// Problem 4 Solution

#include <iostream> // library needed for input and output
using namespace std; // set default namespace to std

int main() // starting point of your code
{
	// declare variables
	int num1 = 0; // declare a variable of type integer named 'num1', initialized to 0
	int num2 = 0; // declare a variable of type integer named 'num2', initialized to 0
	int sum = 0; // declare a variable of type int named 'sum', initialized to 0
	int difference1 = 0; // declare a variable of type int named 'difference1', initialized to 0
	int difference2 = 0; // declare a variable of type int named 'difference2', initialized to 0
	int product = 0; // declare a variable of type int named 'product', initialized to 0
	int quotient1 = 0; // declare a variable of type int named 'quotient1', initialized to 0
	int quotient2 = 0; // declare a variable of type int named 'quotient2', initialized to 0

	// input
	cout << "Please enter first number (X): "; // print this text to ask the user for a number
	cin >> num1; // get input integer value from the user and store into the variable named 'num1'
	cout << "Please enter second number (Y)"; // print this text to ask the user for another number
	cin >> num2; // get input integer value from the user and store into the variable named 'num2'

	// process
	sum = num1 + num2; // computes the sum of num1 and num2 and stores in the variable 'sum'
	difference1 = num1 - num2; // computes the difference of num1 and num2 and stores in the variable 'difference1'
	difference2 = num2 - num1; // computes the difference of num2 and num1 and stores in the variable 'difference2'
	product = num1 * num2; // computes the product of num1 and num2 and stores in the variable 'product'
	quotient1 = num1 / num2; // computes the quotient of num1 and num2 and stores in the variable 'quotient1'
	quotient2 = num2 / num1; // computes the quotient of num2 and num1 and stores in the variable 'quotient2'

	// output
	cout << "Sum of numbers (X + Y): " << sum << endl; // prints out the sum of the numbers
	cout << "Difference of numbers (X - Y)"

	return 0; // return 0 to the callet
}
