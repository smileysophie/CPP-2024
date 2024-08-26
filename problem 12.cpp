// Problem 12 - Solution

#include <iostream> // library needed for input and output 
using namespace std; // set default namespace to std

int main() // starting point of your code
{
	// declare variables
	float fahrenheit_input = 0.0; // declare a variable of type float named 'fahrenheit_input' intialized to 0.0
	float celsius_result = 0.0; // declare a variable of type float named 'celsius_result' intialized to 0.0

	// input
	cout << "Please enter temperature in Fahrenheit: "; // print this text, to ask user for a fahrenheit temperature 
	cin >> fahrenheit_input; // get input floating point value from user and store into the variable named as 'fahrenheit_input'

	// process
	celsius_result = ((fahrenheit_input - 32) * 5.0) / 9; // compute the result celsius value using this formula 

	// output
	cout << "Temperature " << fahrenheit_input << "F is " << celsius_result << "-degrees Celsius"; // print out the resultant converted temperatures

	return 0; // return 0 to the caller
}
