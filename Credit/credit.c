//Credit
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long long number, n;
    int i = 0;
    int count1 = 0;
    int count2 = 0;
    int longitud, temporal, temporal2;
    //Validation if it is a number greater than or aqual to 0
    do
    {
        // read long long from stdin
        number = get_long_long("Number: ");

    }
    while (number == 0 || !(number >= 0));
    //Assignment
    n = number;
    //Digits on the card
    while (number > 0)
    {
        number /= 10;
        count1++;

    }
    int digit [count1];
    //Descomposing a number in an array, each element of the array is in the opposite direction of how the user entered it.
    while (n > 0)
    {
        digit[i] = n % 10;
        n /= 10;
        count2++;
        i++;

    }
    //Reverse the array
    longitud = sizeof(digit) / sizeof(digit[0]);
    for (int x = 0; x < longitud / 2; x++)
    {
        temporal = digit[x];
        digit[x] = digit[longitud - x - 1];
        digit[longitud - x - 1] = temporal;

    }
    //Exist
    int sum1 = 0, extNum = 0, sum2 = 0, sum3 = 0, sumT = 0;
    for (int j = longitud - 2; j >= 0; j -= 2)
    {
        temporal2 = digit[j] * 2;
        if (temporal2 > 9)
        {
            while (temporal2 != 0)
            {
                /* code */
                extNum = temporal2 % 10;
                temporal2 /= 10;
                sum1 += extNum;
            }
        }
        sum2 += temporal2;
    }
    for (int z = longitud - 1; z >= 0; z -= 2)
    {
        /* code */
        sum3 += digit[z];
    }
    sumT = sum2 + sum1 + sum3;
    //printf("%d + %d + %d = %d\n", sum1, sum2, sum3, sumT);
    int ver = 0;
    ver = sumT % 10;
    //printf("%d\n",ver);
    if (ver == 0)
    {
        if (longitud == 13 || longitud == 16)
        {
            if (digit[0] == 4)
            {
                printf("VISA\n");
            }
            else if (digit[0] == 5 && (digit[1] == 1 || digit[1] == 2 || digit[1] == 3 || digit[1] == 4 || digit[1] == 5))
            {
                printf("MASTERCARD\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else if (longitud == 15)
        {
            if (digit[0] == 3 && (digit[1] == 4 || digit[1] == 7))
            {
                /* code */
                printf("AMEX\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
    return 0;
}
