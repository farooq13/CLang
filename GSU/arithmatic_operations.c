#include <stdio.h>


int main() {
  int i = 5;
  int result = i++;

  printf("%d", i);
  printf("\n%d\n", result);

  for (int i = 0; i< 5; printf("%d\n", i++));
  for (int i = 0; i<5; printf("%d ", ++i));
  return 0;
}