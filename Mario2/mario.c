//Mario with 2 piramyds
#include <cs50.h>
#include <stdio.h>
//Call my function table
void table(char c, int x);

int main(void)
{
    /* code */
    int n = get_int("How high do you want your pyramid? (goes from floor 1 to floor 8)\nHeight: ");
    //Condition (number from 1 to 9)
    if (n > 0 && n < 9)
    {
        //space center
        for (int x = 0; x < n; x++)
        {
            //call my function and give parameters
            table(' ', (n - 1 - x));
            table('#', x + 1);
            table(' ', 2);
            table('#', x + 1);
            printf("\n");
        }
    }
    else
    {
        //repeat main function
        main();
    }
    return 0;
}

void table(char c, int x)
{
    for (int y = 0; y < x; y++)
    {
        //print my caracters (space and #)
        printf("%c", c);
    }
}
