// Problem 6 - Solution

#include <iostream> // library required for asking user input and providing output to the terminal
using namespace std; // sets the default namespace to the standard namespace 'std'
					// this allows typing cout, cin, endl
					// otherwise we would need std::cout, std::cin, std::endl

int main() // starting point of your code
{
	// declare variables
	int num1 = 0; // declare a variable of type integer named 'num1' intitialized to 0
	int num2 = -1; // declare a variable of type integer named 'num2' intialized to -1, could have init to 0 also
	int result = 0; // declare a variable of type integer named result, computed value will be stored here

	// input
	cout << "Please enter first number (X): "; // prints the text to ask user for the first input number
	cin >> num1; // ask for user input and store the given value into num1
	cin.ignore();

	cout << "Please enter the second number (Y): "; // prints the text to ask the user for the second input number
	cin >> num2; // ask for user input and store the given value into num2

	// process
							// '=' sign means: compute rhs, assign to lhs
	result = num1 % num2; // compute the modulo num1 % num2 and assign the computed value to the integer variable named 'result'

	// output
	cout << "remainder (X % Y): " << result << endl; // prints the text followed by the value stored in the variable 'result' which is the modulo of num1 and num2

	return 0; // returns the integer 0 to the caller, being the operating system 
			// notifies the operating system that everything went well

}
