#include <stdio.h>

int main(void) {
  /* code */
  int n;
  printf("What's your number:\n");
  scanf("%i", &n);
  if (n % 2 == 0) {
    printf("Even\n");
  }
  else{
    printf("Odd\n");
  }


}
