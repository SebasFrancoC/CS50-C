//Array
#include <stdio.h>
#include <cs50.h>
#include <string.h>
//My functions

int main (void)
{
    int n;
    do {
      /* code */
      n = get_int("n = ");
    } while(n <= 0);

    string names[n];
    for (size_t i = 0; i < n; i++)
    {
      /* code */
      names[i] = get_string("Name %ld: ", i);
    }
    for (size_t i = 0; i < n; i++)
    {
      /* code */
      printf("%s ", names[i]);
    }
    printf("\n");
    return 0;
}
