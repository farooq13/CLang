#include <stdio.h>

int main() {
  char grade;
  printf("Enter your grade: ");
  scanf("%c", &grade);

  switch(grade) {
    case 'A':
      printf("Exellent\n");
      break;
    case 'B':
      printf("Very good\n");
      break;
    case 'C':
      printf("Good\n");
      break;
    case 'D':
      printf("work hard\n");
      break;
    case 'E':
      printf("pass\n");
      break;
    case 'F':
      printf("Fail\n");
      break;
    default:
      printf("Please enter valid grade");
  }

  return 0;
}