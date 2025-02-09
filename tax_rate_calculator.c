
#include <stdio.h>

int main() {

  
  char state;
  float amount, tax_due, tax_rate;

  printf("Enter the state code: ");
  scanf("%c", &state);

  printf("Enter the amount: ");
  scanf("%f", &amount);

  switch(state) {
    case 'K':
      tax_rate = 7.5;
      break;
    case 'G':
      tax_rate = 0.5;
      break;
    case 'E':
      tax_rate = 2.1;
      break;
    default:
      tax_rate = 5;
  }

  tax_due = (tax_rate / 100) * amount;
  printf("Tax Due: %.2f", tax_due);

  return 0;
}
