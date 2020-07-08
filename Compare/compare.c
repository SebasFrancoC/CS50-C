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
void compare(void);

//MAIN FUNCTION HEADER.
int main(void)
{
    //VARIABLE DECLARATION
    compare();
    return 0;
}

void compare(void)
{
    char *s = get_string("s= ");
    char *t = get_string("t= ");
    char *u = malloc(strlen(t) +1);

    for (int i = 0, n = strlen(t); i < n + 1; i++)
    {
        /* code */
        u[i] = t[i];
    }
    
    u[0] = toupper(u[0]);

    printf("%p\n", s);
    printf("%p\n", t);
    printf("Address: %p\tContent: %s\n", u, u); 

    if (s == t)
    {
        printf("Same\n");
    }
    else
    {
        printf("Diferent\n");
    }

    free(u);
}