#include <stdio.h>

int main() {
  printf("Learn about operators in C Programming language");
  /*
  There are 5 types of operators in C programming language
  1. Arithmetic operators
  2. Assignment operators
  3. Comparison operators
  4. Logical operators
  5. Bitwise operators
  */

  // * Assignment Operators

  // Equals (=)
  int a = 10;

  //  Plus Equals to (+=)
  a += 5; // just like a = a + 5
  // Minus Equals to (-=)
  a -= 5; // just like a = a - 5

  // Multiply Equals to (*=)
  a *= 5; // just like a = a * 5

  // Division Equals to (/=)
  a /= 5; // just like a = a / 5

  // Modulus Equals to (%=)
  a %= 5; // just like a = a % 5


  // * Arithmetic Operators

  // Plus operator (+)
  int plus = 10 + 5; // 15

  // Minus operator (-)
  int minus = 10 - 5; // 5

  // Multiplication operator (*)
  int multiply = 10 * 5; // 50

  // Division operator (/)
  int division = 10 / 5; // 2

  // Modulus operator (%)
  int modulus = 10 % 5; // 0

  // Increment (++)
  a++; // just like a = a + 1

  // Decrement (--)
  a--; // just like a = a - 1

  // * Comparison Operators
  // Equal to (==)
  int equal = 10 == 5; // 0
  // Not equal to (!=)
  int notEqual = 10!= 5; // 1
  // Greater than (>)
  int greater = 10 > 5; // 1
  // Less than (<)
  int less = 10 < 5; // 0
  // Greater than or equal to (>=)
  int greaterEqual = 10 >= 5; // 1
  // Less than or equal to (<=)
  int lessEqual = 10 <= 5; // 1

  // * Logical Operators
  // Logical AND (&&)
  int and = (10 == 5) && (10 > 5); // 0
  // Logical OR (||)
  int or = (10 == 5) || (10 > 5); // 1
  // Logical NOT (!)
  int not =!(10 == 5); // 0

  // * Bitwise Operators
  // Bitwise AND (&)
  int bitwiseAnd = 10 & 5; // 0
  // Bitwise OR (|)
  int bitwiseOr = 10 | 5; // 15
  // Bitwise XOR (^)
  int bitwiseXor = 10 ^ 5; // 5
  // Bitwise NOT (~)
  int bitwiseNot = ~10; // -11

  printf("\nResults:");

  return 0;
}