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
void enteros(void);
void cadenas(void);

//MAIN FUNCTION HEADER.
int main(void)
{
    //VARIABLE DECLARATION
    enteros();
    cadenas();
    return 0;
}

void enteros(void)
{
    int n = 50;
    int *p = &n;
    printf("%p\n", &n);
    printf("%p\n", p);
}

void cadenas(void)
{
    char *s = "EMMA";
    printf("%c\n", *(s+0));
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
    printf("%c\n", *(s+3));
}