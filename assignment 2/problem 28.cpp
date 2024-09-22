// Problem 28 - Solution
#include <iostream> // library needed for input and output
using namespace std; // set default namespace to std

int main()
{
	// declare variables
	int input = 0;

	// input
	// asks user for an integer number
	cout << "Please enter number: ";
	cin >> input;

	// process and output

	// loops for each line for the top half
	for (int i = input - 1; i !=0; i--)
	{
		// dot loop
		for (int dot = 0; dot < i; dot++)
			cout << ".";
		// star loop
		for (int star = 0; star != input - i; star++)
			cout << "*";
		cout << endl;
	}

	// outputs the middle line
	for (int middle = 0; middle < input; middle++)
		cout << "*";
	cout << endl;

	// loops for each line for the bottom half
	for (int i = input - 1; i != 0; i--)
	{
		// dot loop
		for (int dot = 0; dot < input - i; dot++)
			cout << ".";
		// star loop
		for (int star = 0; star < i; star++)
			cout << "*";
		cout << endl;
	}
	return 0;
}
