//Uppercase
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
//My functions

int main (void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
      /* code */
      if (s[i] >= 'a' && s[i] <= 'z')
      {
        //Convert to Uppercase
        printf("%c", toupper(s[i]));
      }
      else
      {
        //Nothing
        printf("%c", s[i]);
      }
    }
    printf("\n");
}
