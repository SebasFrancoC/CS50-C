//Mario Right
#include <cs50.h>
#include <stdio.h>
void table(char c, int x);

int main(void)
{
    /* code */
    //Validation
    int n = get_int("How high do you want your pyramid? (goes from floor 1 to floor 8)\nHeight: ");
    //from 1 to 9
    if (n > 0 && n < 9)
    {
        //Right print
        for (int x = 0; x < n; x += 1)
        {
            printf("%*c", n - x, '#');
            for (int y = 0; y < x; y++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
    else
    {
        main();
    }
    return 0;
}

void table(char c, int x)
{
    for (int y = 0; y < x; y++)
    {
        printf("%c", c);
    }
}
