#include <stdio.h>

int main() {
  double number;
  char alphabet;

  printf("Enter double number: ");
  scanf("%lf", &number);

  printf("Enter Alphabet: ");
  scanf("\n%c", &alphabet);

  printf("Number: %lf", number);
  printf("Alphabet: %c", alphabet);
  return 0;
}