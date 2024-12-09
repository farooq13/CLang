#include <stdio.h>


int main() {
  int num1 = 40, num2 = 80, AND_opr, OR_opr, NOT_opr, XOR_opr,left_shit, right_shift;

  AND_opr = (num1&num2);
  OR_opr = (num1|num2);
  // NOT_opr = (num1~num2);
  XOR_opr = (num1^num2);
  

  printf("AND_opr value = %d\n", AND_opr);
  printf("OR_opr value = %d\n", OR_opr);
  printf("NOT_opr value = %d\n", NOT_opr);
  printf("XOR_opr value = %d\n", XOR_opr);
  printf("left_shift value = %d\n", num1<<1);
  printf("right_shift value = %d\n", num1>>1);

  return 0;

}