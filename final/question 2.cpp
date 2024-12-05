// Question 2 - Solution
#include <iostream>
using namespace std;

// returns whether or not the given input string is a pallindrome
bool isPalindrome(const char str[], const int maxLen, int left = 0)
{
	// declare variable
	int right = strlen(str) - 1;

	// loops through the string until all chars are covered
	while (left < right)
	{
		// if one of the characters doesn't match, that means it's not a pallindrome
		if (str[left] != str[right])
			// returns false to indicate that it's not a pallindrome
			return false;

		// increments and decrements the left and right values respectively
		left++;
		right--;
	}
	
	// if no mismatches were found, that means that the it is a pallindrome
	// returns true to indicate that it's a pallindrome
	return true;
}

int main()
{
	// declare variables
	const int maxLen = 100;
	int size;
	char str[maxLen];
	bool value;

	// input
	// gets array from the user
	cout << "Please enter a string: ";
	cin.getline(str, maxLen);

	// calls is palindrome to determine if the string is a palindrome
	value = isPalindrome(str, maxLen);

	// outputs whether it's a pallindrome or not
	cout << "The string " << str << " is ";
	if (value == false)
		cout << " not ";
	cout << "a pallindrome.";

	return 0;
}
