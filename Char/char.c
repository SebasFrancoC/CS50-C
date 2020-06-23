//Agree or Disagree
#include <stdio.h>

int main(void) {
  /* code */
  char option;
  printf("Do you agree?\n");
  scanf("%c", &option);
  if (option == 'Y'|| option == 'y') {
    printf("Agreed\n");
  }
  else if (option == 'N'|| option == 'n'){
    printf("Not agreed\n");
  }
  else{
    printf("ERROR\n");
  }

}
