//Greedy Algorithms
#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    //declarate variables
    int count = 0;
    int change;
    float dollars;
    do
    {
        //first asks the user how much change is owed and validate
        dollars = get_float("Change owed: ");
    }
    while (dollars == 0 || !(dollars >= 0));

    change = round(dollars * 100);

    while (change > 0)
    {
        //Use as many quarters needed
        while (change >= 25)
        {
            count ++;
            change -= 25;
        }
        //Use as many dimes needed
        while (change >= 10)
        {
            count ++;
            change -= 10;
        }
        //Use as many nickels needed
        while (change >= 5)
        {
            count ++;
            change -= 5;
        }
        //Use as many pennies needed
        while (change >= 1)
        {
            count ++;
            change -= 1;
        }
    }
    printf("Change: %i\n", count);
}
