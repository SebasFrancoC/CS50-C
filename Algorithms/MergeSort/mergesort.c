/*Merge Sort*/

//LIBRARY FILE ACCESS
#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//SYMBOLIC CONSTANTS
#define max 10

//GLOBAL VARIABLES
int a[11] = { 10, 14, 19, 26, 27, 31, 33, 35, 42, 44, 0 };
int b[10];

//DEFINITION OF FUNCTIONS
void merging(int low, int mid, int high);
void sort(int low, int high);

//MAIN FUNCTION HEADER.
int main(void)
{
    //VARIABLE DECLARATION
    int i;

    printf("List before sorting\n");//OUTPUT INSTRUCTION

    for(i = 0; i <= max; i++)
    {
       printf("%d ", a[i]);
    }
    sort(0, max);

    printf("\nList after sorting\n");//OUTPUT INSTRUCTION

    for(i = 0; i <= max; i++)
    {
       printf("%d ", a[i]);
    }
    printf("\n");
  return 0;
}


void merging(int low, int mid, int high)
{
   int l1, l2, i;

   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++)
   {
      if(a[l1] <= a[l2])
      {
         b[i] = a[l1++];
      }
      else
      {
         b[i] = a[l2++];
      }
   }

   while(l1 <= mid)
   {
      b[i++] = a[l1++];
   }

   while(l2 <= high)
   {
      b[i++] = a[l2++];
   }

   for(i = low; i <= high; i++)
   {
      a[i] = b[i];
   }
}

void sort(int low, int high)
{
   int mid;

   if(low < high)
   {
      mid = (low + high) / 2;
      sort(low, mid);
      sort(mid+1, high);
      merging(low, mid, high);
   }
   else
   {
      return;
   }
}
