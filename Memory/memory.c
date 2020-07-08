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
void f(void);

//MAIN FUNCTION HEADER.
int main(void)
{
    //VARIABLE DECLARATION
    f();
    return 0;
}

void f(void)
{
    int *x = malloc(10 *sizeof(int));
    x[9] = 0;
    free(x);
}