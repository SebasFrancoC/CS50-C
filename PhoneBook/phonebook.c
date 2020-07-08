/*Address*/

//LIBRARY FILE ACCESS
#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//MAIN FUNCTION HEADER.
int main(void)
{
    FILE *file = fopen("phonebook.csv", "a");

    //Get strings from user
    char *name = get_string("Name:");
    char *number = get_string("Number:");

    //Print (write) strings to file
    fprintf(file, "%s,%s\n", name, number);

    //Close file
    fclose(file);
}