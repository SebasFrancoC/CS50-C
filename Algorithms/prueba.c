/*TITLE (COMMENT)*/

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
long int factorial (int base);

//MAIN FUNCTION HEADER.
int main(void)
{
    //VARIABLE DECLARATION
    int n;

    printf("n = ");//OUTPUT INSTRUCTION
    scanf("%d", &n);//INPUT INSTRUCTION

    printf("%d! = %ld\n", n, factorial(n));
    //ASSIGNMENT INSTRUCTION
  return 0;
}

long int factorial(int base)
{
    if (base <= 1)
    {
        return(1);
    }
    else
    {
        return(base * factorial(base -1));
    }
}
