// Problem 9 Solution

#include <iostream> // library needed for input and output
using namespace std; // set default namespace to std

int main() // starting point of your code
{
	// declare variables
	float width = 0.0; // declare a variable of type float named 'width', initialized to 0.0
	float height = 0.0; // declare a variable of type float named 'height', initialized to 0.0
	float radius = 0.0; // declare a variable of type float named 'radius', initialized to 0.0
	float circle_area = 0.0; // declare a variable of type float named 'circle_area', initialized to 0.0
	float rectangle_area = 0.0; // declare a variable of type float named 'rectangle_area', initialized to 0.0
	bool result = 0; // declare a variable of type bool named 'result', initialized to 0/false

	// input
	cout << "Please enter width of rectangle: "; // print text to ask user for width number
	cin >> width; // get input float value from the user and store into variable 'width'
	cout << "Please enter height of rectangle: "; // print text to ask user for height number
	cin >> height; // get input float value from the user and store into variable 'height'
	cout << "Please enter radius of circle: "; // print text to ask user for radius number
	cin >> radius; // get input float value from the user and store into variable 'radius'


	// process
	circle_area = 3.14 * radius * radius; // computes the circle area and stores into variable 'circle_area'
	rectangle_area = width * height; // computes the rectangle area and stores into variable 'rectangle_area'
	result = rectangle_area <= circle_area; // computes if the rectangle is less area than the circle and stores into variable 'result'


	// output
	cout << "Rectangle fits inside circle: " << boolalpha << result << endl; // prints out the result to the user


	return 0; // return 0 to the caller
}
