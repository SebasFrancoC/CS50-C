#include <stdio.h>

int main(void) {
  /* code */
  float price;
  float discount;
  printf("What's the price\n");
  scanf("%f", &price);
  discount= (1-0.05)*price;
  printf("The price of these shoes are %.2f\n",discount);
}
