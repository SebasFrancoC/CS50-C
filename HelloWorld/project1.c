#include <stdio.h>

int main(void) {
  /* code */
  char name[10];
  char lastName[10];
  printf("Hello, what's your name?\n");
  scanf("%s %s",name, lastName);
  printf("Hello %s %s\n",name, lastName);
  return 0;
}
