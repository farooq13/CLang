#include <stdio.h>

int main() {
  int nums[3][3];

    for (int i = 20; i <= 50; i++) {
      if (i == 21 || i == 37)
      continue;
      printf("%d\n", i);
    }
    return 0;

}