#include <stdio.h>

int main() {
  int number;
  printf("Enter the number: ");
  scanf("%d", &number);
  
  int count = 1;
  
  do
  {
    int product = number * count;
    printf("%d * %d = %d\n", number, count, product);
    count ++;
  
  } while (count < 5);
  
  return 0;
}