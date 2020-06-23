//Conditions
#include <stdio.h>

int main(void) {
  /* code */
  int x;
  int y;
  printf("x: ");
  scanf("%i", &x);
  printf("y: ");
  scanf("%i", &y);
  if (x<y) {
    printf("%i es menor que %i\n", x, y);
  }
  else if (x==y){
    printf("%i es igual que %i\n", x, y);
  }
  else{
    printf("%i es mayor que %i\n", x, y);
  }

}
