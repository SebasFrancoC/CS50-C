/*Inserction Sort*/

//LIBRARY FILE ACCESS
#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//DEFINITION OF FUNCTIONS
void insertionsort(int count, int number[]);

//MAIN FUNCTION HEADER.
int main(void)
{
   int count = get_int("n =  ");
   int number[count];
    for(int i = 0; i < count;i++)
    {
      printf("Enter element [%d]: ", i+1);
      number[i] = get_int("");
    }

    insertionsort(count, number);
    printf("\n");
    return 0;
}

void insertionsort(int count, int number[])
{
    int i, j, temp;
    // Implementation of insertion sort algorithm
    for(i=1;i<count;i++)
    {
       temp=number[i];
       j=i-1;
       while((temp<number[j])&&(j>=0))
       {
          number[j+1]=number[j];
          j=j-1;
       }
       number[j+1]=temp;
    }

    printf("Order of Sorted elements: ");
    for(i=0;i<count;i++)
    {
       printf(" %d",number[i]);
    }
}
