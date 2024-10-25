#include <stdio.h>

int main(){
  char operator;
  printf("Choose an operator ['+', '-', '*', '/']: ");
  scanf("%c", &operator);

  double num1, num2;

  printf("Enter first number: ");
  scanf("%lf", &num1);

  printf("\nEnter second number: ");
  scanf("%lf", &num2);

  double result;

  switch(operator) {
    case '+':
    result = num1 + num2;
    break;

    case '-':
    result = num1 - num2;
    break;

    case '*':
    result = num1 * num2;
    break;

    case '/':
    result = num1 / num2;
    break;

    default:
    printf("Invalid option.Please choose one of the given operators.");

  };
  printf("%.1lf", result);

  return 0;
}