#include <stdio.h>


int maxNumber(int x, int y) {
  return x > y ? x : y;
}


// int main() {
//   // int max = maxNumber(3, 5);

//   // printf("%d", max);

  

//   return 0;
// }


int main() {
  for (int i = 20; i <= 50; i++) {
    if (i == 21 || i == 37)
    continue;
    printf("%d\n", i);
  }
  return 0;
}