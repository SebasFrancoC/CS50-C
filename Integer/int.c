#include <stdio.h>

int main(void) {
  /* code */
  int age;
  int days;
  printf("What's your age?\n");
  scanf("%i", &age);
  days= 365*age;
  printf("You are at least %i days old\n",days);
}
