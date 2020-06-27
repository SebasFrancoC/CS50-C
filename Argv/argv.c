#include <stdio.h>
#include <cs50.h>

int main (int argc, string argv[])
{
    if (argc == 2)
    {
        // put something $ ./argv sebastian
        printf("Hello %s\n",argv[1]);
    }
    else
    {
        printf("Hello, world\n");
    }
}
