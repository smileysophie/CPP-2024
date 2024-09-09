#include <iostream>
using namespace std;

int main() {

      // 8 bits in a byte

      int var = 1; // UNINITIALIZED VALUE ****************** TEST (4 bytes)

      float var2 = 0.0; // (4 bytes)
      // cout << 7.2 % 2.5; // error: invalid operands of types ‘double’ and ‘double’ to binary ‘operator%’

      double var3; // (8 bytes), like a float

      // use two integers to store complex numbers
      int dollar = 53;
      int penny = 35;

      char var4; // (1 byte) 8^2 = 256 ASCII characters
      bool var5; // 0 is false, everything else is true (1 byte, byte is faster to run than a bit )

      // implicit typecasting
      // the computer deciding what to assign a variable as

      // explicit typecasting
      // doing char() and changing something to be a variable

      // arithmetic operator:
      // binary operators
      // +,-,*,/,%
      // unary operators
      // ++, --, -, +
      
      // logical operators
      // binary operators
      // <,>,<=,>=,==,!=
      // unary operator:
      // !

      // logical chains
      // &&, || 
  
      return 0;
}
