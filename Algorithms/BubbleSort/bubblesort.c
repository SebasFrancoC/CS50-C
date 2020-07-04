/*Bubble Sort*/

//LIBRARY FILE ACCESS
#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


//SYMBOLIC CONSTANTS

//DEFINITION OF FUNCTIONS
int bubbleSort(void);

//MAIN FUNCTION HEADER.
int main(void)
{
    bubbleSort();

    return 0;
}

int bubbleSort(void)
{

    int i, j, temp, n = 8;
    int numbers[] = {6, 7, 9, 1, 10, 2, 3, 8};
    for(i = n - 2; i >= 0; i--)
    {
        for(j = 0; j <= i; j++)
        {
          if(numbers[j]>numbers[j + 1])
          {
            temp = numbers[j];
            numbers[j] = numbers[j + 1];
            numbers[j + 1] = temp;
          }
        }
    }

  printf("Sorted elements: ");
  for(i = 0; i < n; i++)
  {
      printf("%d ", numbers[i]);
  }
  printf("\n");
  return 0;
}
