//Includes
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//Declare functions
bool numArgv(string argumentV);

int main(int argc, string argv[])
{
    int k = 0, count1 = 0;
    int numCtext = 0;
    char c;
    // argc in position 1 after ./caesar argv[1] <- pos 1
    string argumentV = argv[1]; // //Variable
    if (argc != 2 || !numArgv(argumentV))
    {
        //error
        printf("Usage: ./caesar key\n");
        return 1;
    }
    //string of text
    string plaintext = get_string("plaintext: ");
    //count letters
    numCtext = strlen(plaintext);
    //string to interger
    k = atoi(argumentV);
    //change latter add k
    for (size_t i = 0; i < numCtext; i++)
    {
        /* code */
        if ((plaintext[i] >= 65 && plaintext[i] <= 90) || (plaintext[i] >= 97 && plaintext[i] <= 122))
        {
            //char
            c = plaintext[i];
            if (isalpha(c))
            {
                char a = 'A';
                if (islower(c))
                {
                    a = 'a';
                    plaintext[i] = ((c - a + k) % 26 + a);
                }
                else
                {
                    plaintext[i] = ((c - a + k) % 26 + a);
                }
            }
        }
    }
    printf("ciphertext: %s\n", plaintext);
}

//function numArgv and I need argumentV
bool numArgv(string argumentV)
{
    //Variables
    int n = strlen(argumentV);

    for (size_t i = 0; i < n; i++)
    {
        /* validation 1 - 0*/
        if (!(argumentV[i] >= 48 && argumentV[i] <= 57))
        {
            return false;
        }
  }
    return true;
}
