#include <stdio.h>

int main() {
  int count = 1;
  while(count <= 10) {
    if (count == 5) {
      printf("%d \n", count++);
      goto five;

      printf("%d IBM\n", count++);
    }
  }
  five: printf("This is fifth loop\n");

  return 0;
}