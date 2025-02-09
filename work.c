#include <stdio.h>

int main() {
  int marks;


  printf("Enter your marks: ");
  scanf("%d", &marks);

  switch(marks / 10) {
    case 10:
    case 9:
    case 8:
    case 7:
      printf("Your grade is A");
      break;
    case 6:
      printf("Grade is B");
      break;
    case 5:
      printf("Grade is C");
      break;
    case 4:
      printf("Grade is D");
      break;
    default:
      printf("Grade is F");
  }
  return 0;
}
