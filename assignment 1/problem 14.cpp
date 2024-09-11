// Problem 14 - Solution

#include <iostream> // library needed for input and output 
using namespace std; // set default namespace to std

int main() // starting point of your code
{
	// declare variables
	int chickens = 0; // declare a variable of type int named 'chickens', intialized to 0
	int cows = 0; // declare a variable of type int named 'cows', intialized to 0
	int pigs = 0; // declare a variable of type int named 'pigs', intialized to 0
	int total_legs = 0; // declare a variable of type int named 'total_legs', intialized to 0
	const int CHICKEN_LEGS = 2; // declare a variable of type const int named 'CHICKEN_LEGS', intialized to 2
	const int COW_LEGS = 4; // declare a variable of type const int named 'COW_LEGS', intialized to 4
	const int PIG_LEGS = 4; // declare a variable of type const int named 'PIG_LEGS', intialized to 4

	// input
	cout << "Please enter number of chickens: "; // print this text, to ask user for a number of chickens
	cin >> chickens; // get input integeer value from user and store into the variable named as 'chickens'
	cout << "Please enter number of cows: "; // print this text, to ask user for a number of cows
	cin >> cows; // get input integer value from user and store into the variable named 'cows'
	cout << "Please enter number of pigs: "; // print this text, to ask user for a number of pigs
	cin >> pigs; // get input integer value from user and store into the variable named 'pigs'

	// process
	total_legs += chickens * CHICKEN_LEGS; // compute the number of chicken legs and add to total number of legs
	total_legs += cows * COW_LEGS; // compute the number of cow legs and add to total number of legs
	total_legs += pigs * PIG_LEGS; // compute the number of pig legs and add to total number of legs


	// output
	cout << "Total number of legs for the animals: " << total_legs << endl; // print out the total number of legs

	return 0; // return 0 to the caller
}
