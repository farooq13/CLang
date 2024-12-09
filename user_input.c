#include <stdio.h>
#include <string.h>


int main() {
  char name[25];
  int age;

  printf("Name: ");
  fgets(name, 25, stdin);
  printf("Welcome, %s", name);

  printf("Age: ");
  scanf("%d", &age);
  printf("You'r %d years old", age);
  // printf("What's your name? ");
  // fgets(name, 25, stdin);
  // // name[strlen(name)-1] = '\0';
  // printf("Welcome %s", name);


  // printf("How old are you? ");
  // scanf("%d", &age);
  // printf("You'r %d years old", age);

  return 0;
}