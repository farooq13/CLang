#include <stdio.h>

int main() {
  int m = 50;
  int n = 20;

  if (m < n && m != 0) {
    printf("M wins");
  } else if (m > n || n == 20) {
    printf("N tries");
  } else {
    printf("Unknown");
  }
}