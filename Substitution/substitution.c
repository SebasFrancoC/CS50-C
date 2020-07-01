//Includes
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//Declare functions
bool validationAlpha(string argumentV);
bool repetionAlpha(string argumentV);

int main(int argc, string argv[])
{
    int k = 0, count1 = 0;
    int numCtext = 0, numCargumentv = 0;
    char c;
    // argc in position 1 after ./caesar argv[1] <- pos 1
    string argumentV = argv[1]; // //Variable
    if (argc != 2)
    {
        //error
        printf("./substitution key\n");
        return 1;
    }
    if (!validationAlpha(argumentV))
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    if (!repetionAlpha(argumentV))
    {
        printf("Key must not contain repeated characters.\n");
        return 1;
    }
    //string of text
    string plaintext = get_string("plaintext: ");
    //count letters
    numCtext = strlen(plaintext);
    numCargumentv = strlen(argumentV);
    for (size_t i = 'A'; i <= 'Z'; i++)
    {
        /* code */
        argumentV[i - 'A'] = toupper(argumentV[i - 'A']) - i; //argV[1]
    }
    //printf("ciphertext: ");
    /* code */
    for (size_t i = 0; i < numCtext; i++)
    {
        if ((plaintext[i] >= 65 && plaintext[i] <= 90) || (plaintext[i] >= 97 && plaintext[i] <= 122))
        {
            //char
            plaintext[i] = plaintext[i] + argumentV[plaintext[i] - (isupper(plaintext[i]) ? 'A' : 'a')];
            //printf("%c", plaintext[i]);
        }

    }
    printf("ciphertext: %s\n", plaintext);
    return 0;
}


//function validation and I need argumentV
bool validationAlpha(string argumentV)
{
    //Variables
    int n = strlen(argumentV);
    int ind[26] = {0};
    for (size_t i = 0; i < n; i++)
    {
        /* validation 1 - 0*/
        if (!((argumentV[i] >= 65 && argumentV[i] <= 90) || (argumentV[i] >= 97 && argumentV[i] <= 122)) || !(n == 26))
        {
            return false;
        }
    }
    return true;
}

bool repetionAlpha(string argumentV)
{
    int n = strlen(argumentV);
    int ind[26] = {0};
    for (size_t i = 0; i < n; i++)
    {
        /* validation repetion - 0*/
        int repetion = toupper(argumentV[i]) - 'A';
        if (repetion[ind] > 0)
        {
            return false;
        }
        repetion[ind]++;
    }
    return true;
}
