/*Recursion*/

//LIBRARY FILE ACCESS
#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//DEFINITION OF FUNCTIONS
long int factorial (int base);
void paint (int block);

//MAIN FUNCTION HEADER.
int main(void)
{
    //VARIABLE DECLARATION
    int n = get_int("n = ");//OUTPUT INSTRUCTION
    printf("%d! = %ld\n", n, factorial(n));
    paint(n);
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

void paint(int block)
{
    if (block == 0)
    {
        return;
    }
    paint(block -1);
    for (size_t i = 0; i < block; i++)
    {
        printf("#");
    }
    printf("\n");
}
