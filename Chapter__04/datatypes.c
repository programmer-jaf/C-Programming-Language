#include <stdio.h>

int main() {
  printf("data types in c Programming language\n");
  printf("---------------------------------\n");
  /*
  * There are 4 basic data types in C programming language
  1.int
  2.float
  3. double
  4. char
  */
  printf("int data type: %zu bytes\n", sizeof(int));
  printf("float data type: %zu bytes\n", sizeof(float));
  printf("double data type: %zu bytes\n", sizeof(double));
  printf("char data type: %zu bytes\n", sizeof(char));

  printf("\n");
  int num = 125;
  float floating_point_Value = 1563.45;
  double double_value = 1230.1234;
  char character = 'A';
  printf("%i","The number is ",num);
  printf("\n");
  printf("%f",floating_point_Value);
  printf("\n");
  printf("%lf",double_value);
  printf("\n");
  printf("%c",character);
  return 0;
}