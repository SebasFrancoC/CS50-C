/*jpeg*/

//LIBRARY FILE ACCESS
#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//MAIN FUNCTION HEADER.
int main(int argc, char *arg[])
{
    //argument ./jpeg arguments
    if (argc != 2)
    {
        return 1;
    }
    //Open file
    FILE *file = fopen(arg[1], "r");
    if (file == NULL)
    {
        return 1;
    }

    //Read 3 bytes from file
    unsigned char bytes[3];
    fread(bytes, 3, 1, file);

    //Check if bytes are 0xff 0xd8 0xff
    if (bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff)
    {
        printf("Maybe\n");
    }
    else
    {
        printf("No\n");
    }
    //Close file
    fclose(file);
}