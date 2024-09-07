// Problem 13 - Solution

#include <iostream> // library needed for input and output 
using namespace std; // set default namespace to std

int main() // starting point of your code
{
	// declare variables
	float celsius_input = 0.0; // declare a variable of type float named 'celsius_input' intialized to 0.0
	float fahrenheit_result = 0.0; // declare a variable of type float named 'fahrenheit_result' intialized to 0.0

	// input
	cout << "Please enter temperature in Celsius: "; // print this text, to ask user for a celsius temperature 
	cin >> celsius_input; // get input floating point value from user and store into the variable named as 'celsius_input'

	// process
	fahrenheit_result = celsius_input * 9/5 + 32; // compute the result fahrenheit value using this formula 

	// output
	cout << "Temperature " << celsius_input << "C is " << fahrenheit_result << "-degrees Fahrenheit"; // print out the resultant converted temperatures

	return 0; // return 0 to the caller
}
