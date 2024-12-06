// Question 2 - Solution
#include <iostream>
using namespace std;

// removes uppercase 
char lowercase(char ch)
{
	// checks whether it's alphabet uppercase
	if (ch >= 'A' && ch <= 'Z')
	{
		// returns the lowercase value
		return ch + ('a' - 'A');
	}

	return ch;
}

// checks if char alphabetic
bool alphabetic(char ch)
{
	return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

// preprocesses string
void preprocess(const char str[], char* cleaned, int maxLen)
{
	// declare variable
	int j = 0;

	// loops through the string
	for (int i = 0; i < maxLen && str[i] != '\0'; i++)
	{
		// checks if alphabetic
		if (alphabetic(str[i]))
			// makes lowercase
			cleaned[j++] = lowercase(str[i]);
	}
	
	// puts a null char on the end of the cleaned string
	cleaned[j] = '\0';

}
// returns whether or not the given input string is a pallindrome
bool isPalindrome(const char str[], const int maxLen)
{
	// declare variables
	int right = strlen(str) - 1;
	char* cleaned = new char[maxLen];
	int left = 0;

	// preprocesses string
	preprocess(str, cleaned, maxLen);

	// loops through the string until all chars are covered
	while (left < right)
	{
		// if one of the characters doesn't match, that means it's not a pallindrome
		if (cleaned[left] != cleaned[right])
		{
			delete[] cleaned;
			// returns false to indicate that it's not a pallindrome
			return false;
		}

		// increments and decrements the left and right values respectively
		left++;
		right--;
	}

	delete[] cleaned;

	// if no mismatches were found, that means that the it is a pallindrome
	// returns true to indicate that it's a pallindrome
	return true;
}

int main()
{
	// declare variables
	const int maxLen = 100;
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
