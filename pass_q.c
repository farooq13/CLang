#include <stdio.h>

int main () {

  int matrix[3][3];

  printf("Enter 9 elements for the 3x3 martix1: ");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &matrix[i][j]);
      printf("%d", matrix[i][j]);
    }
    printf("\n");
  }
}