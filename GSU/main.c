#include <stdio.h>


int maxNumber(int x, int y) {
  return x > y ? x : y;
}


int main() {
  int max = maxNumber(3, 5);

  printf("%d", max);
  return 0;
}