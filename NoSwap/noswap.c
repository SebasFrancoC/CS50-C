/*Address*/

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
void swap(int a, int b);

//MAIN FUNCTION HEADER.
int main(void)
{
    //VARIABLE DECLARATION
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(x, y);
    printf("x is %i, y is %i\n", x, y);
    return 0;
}

void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}