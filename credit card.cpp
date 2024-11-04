#include <iostream>
#include "FileName.h"
using namespace std;

// function prototypes
bool creditLuhn(int credit_num[])
{
	// declare variables
	bool valid = 0;
	const int SIZE = 16;
	int doubled = 0;
	int total = 0;
	
	// process
	// loops through the input array
	for (int i = 1; i < SIZE; i+=2)
	{
		// doubles every second digit
		doubled = credit_num[i];
		doubled *= 2;
		cout << doubled;
		// checks if doubling of number results in two digit number
		if (doubled > 9)
		{
			// adds both digits together to form single digit
			// sums all the digits
			total += doubled / 10;
			total += doubled % 10;

		}

	}
	// determines if the total modulo 10 is 0
	if (total % 10 == 0)
		// number is valid
		valid = 1;

	return valid;
}


int main()
{
	// declare variables
	const int CREDIT_SIZE = 16;
	const int CHAR_SIZE = 17;
	char char_credit_num[CHAR_SIZE] = "";
	int credit_num[CREDIT_SIZE] = {};

	// input
	// accept a 16 digit credit card number as input
	cout << "Please enter a 16 digit credit card number: ";
	cin >> char_credit_num;
	// converts to integer array
	for (int i = 0; i < CREDIT_SIZE; i++)
		credit_num[i] = char_credit_num[i] - '0';

	// process
	// passes credit card number and size of array as argument to checkLuhn function
	cout << creditLuhn(credit_num);

	return 0;
}
