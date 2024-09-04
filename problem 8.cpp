// Problem 8 Solution

#include <iostream> // library needed for input and output
using namespace std; // set default namespace to std

int main() // starting point of your code
{
	// declare variables
	int num1 = 0; // declare a variable of type int named 'num1', initialized to 0
	int num2 = 0; // declare a variable of type int named 'num2', initialized to 0
	int sum = 0; // declare a variable of type int named 'sum', initialized to 0
	bool result{}; // declare a variable for type bool named 'result', initialized to false
	

	// input
	cout << "Please enter first number: "; // print this text to ask the user for a number
	cin >> num1; // get input integer value from the user and store into the variable named 'num1'
	cout << "Please enter second number: "; // print this text to ask the user for another number
	cin >> num2; // get input integer value from the user and store into the variable named 'num2'

	// process
	sum = num1 + num2; // computes the sum of both numbers and stores in variable 'sum'
	result = sum < 100; // computes the result of if the sum is less than 100 and stores in variable 'result'

	// output
	cout << "Sum less than 100: " << boolalpha << result << endl; // prints out the result to the user


	return 0; // return 0 to the caller
}
