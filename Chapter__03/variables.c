#include <stdio.h>

int main(){
  printf("variables in c Programming language\n");
  printf("-------------------------------- Variables --------------------------------","\n");
  printf("Variables are container to store values. For example, If you want to store Baby Milk you have to store it in a milk bottle \n");
  int num = 124;

  printf("num = %d", num);
  /*
  ! Rules while creating variables
  1. A variable name must start with a letter or underscore
  2. A variable name cannot start with a number
  3. A variable name can only contain alpha-numeric characters and underscores
  4. Variable names are case-sensitive (myVariable and myvariable are different variables)
  5. Variable names cannot be a reserved keyword in C (e.g., int, float, double, char, etc.)
  */
  return 0;
}