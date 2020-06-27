//Array
#include <stdio.h>
#include <cs50.h>
//My functions
float average(int length, int array[]);

int main (void)
{
    int n = get_int("n: ");
    int array[n];
    for (size_t i = 0; i < n; i++) {
      /* code */
      int number = get_int("Number %lu: ", i + 1);
      array[i] = number;
    }
    for (size_t i = 0; i < n; i++) {
      /* code */
      printf("%i ", array[i]);
    }
    average(n, array);
    return 0;
}
//To do average
float average(int length, int array[])
{
    int sum = 0;
    float ave;
    for (size_t i = 0; i < length; i++)
    {
      /* code */
      sum += array[i];
    }
    ave = (float) sum / (float) length;
    printf("Average = %.2f\n", ave);
    return 0;
}
