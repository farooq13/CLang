#include <stdio.h>

int main() {
  int count = 1;

  while(count <= 10) {
    if (count == 5) 
      goto five;
      
      printf("%d IBM\n", count++);
  }
  five: printf("This is the fifth loop\n");

  return 0;
}