#include <stdio.h>
#include <stdbool.h>

/* COMPARISON OPERATORS
  > Greater than
  < Less than
  == Equal to
  >= Greater than or Equal to
  <= Less than or Equal to
  != Not Equal to
*/

/*
     LOGICAL OPERATORS
  &&
  ||
  !
*/
int main() {
  bool value = (12 < 9) | (2 != 1);

  printf("%d ", value);
  //printf("Value1 ---> %d", value1);
  //printf("\nValue2 ---> %d", value2);
  return 0;
}