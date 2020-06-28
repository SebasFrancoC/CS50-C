//Includes
#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <math.h>

//Declare functions
int countWords(int numC, string text);
int countLetters(int numC, string text);
int counSentences(int numC, string text);
float formulaColemanLiau(int words, int letters, int sentences);
void grade(float ind);

int main(void)
{
    //Variables
    int numC, words, letters, sentences;
    float ind;
    string text = get_string("Text: ");

    numC = strlen(text);
    words = countWords(numC, text);
    letters = countLetters(numC, text);
    sentences = counSentences(numC, text);
    ind = round(formulaColemanLiau(words, letters, sentences));
    grade(ind);

    return 0;
}

//functions count words
int countWords(int numC, string text)
{
    //variables
    int readLetter = 0;
    int i;
    int count = 0;
    //my loop
    for (i = 0; i < numC; i++)
    {
        //space
        if (text[i] == ' ')
        {
            //add 1
            if (readLetter == 1)
            {
                if (text[i + 1] != ' ')
                {
                    count++;
                }
            }
        }
        else
        {
            readLetter = 1;
        }
    }
    //Space end
    if (text[i - 1] != ' ')
    {
        count++;
    }
    return (count);
}

//function count letters
int countLetters(int numC, string text)
{
    //variables
    int count = 0;
    for (int i = 0; i < numC; i++)
    {
        // a - z and A -Z num ascii
        if ((text[i] >= 65 && text[i] <= 90) || (text[i] >= 97 && text[i] <= 122))
        {
            count++;
        }
    }
    //retunr count
    return (count);
}

//count sentences
int counSentences(int numC, string text)
{
    //variables
    int count = 0;
    for (int i = 0; i < numC; i++)
    {
        /* . ! ?  ASCII */
        if ((text[i] == 33) || (text[i] == 46) || (text[i] == 63))
        {
            count++;
        }
    }
    return (count);
}

//formula of Coleman Liau
float formulaColemanLiau(int words, int letters, int sentences)
{
    //Constants
    const float C1 = 0.0588;
    const float C2 = 0.296;
    const float C3 = 15.8;

    //Variables
    float l, s, ind;
    l = 0;
    s = 0;
    ind = 0;
    /*index of a text is designed to output Here, L is the average number of letters per 100 words in the text, and S is the average number of sentences per 100 words in the text.*/

    l = ((float) letters / (float) words) * 100;
    s = ((float) sentences / (float) words) * 100;
    ind = (C1 * l) - (C2 * s) - C3;
    return (ind);
}

//options
void grade(float ind)
{
    if (ind <= 1)
    {
        printf("Before Grade 1\n");
    }
    else if (ind == 2)
    {
        printf("Grade 2\n");
    }
    else if (ind == 3)
    {
        printf("Grade 3\n");
    }
    else if (ind == 4)
    {
        printf("Grade 4\n");
    }
    else if (ind == 5)
    {
        printf("Grade 5\n");
    }
    else if (ind == 6)
    {
        printf("Grade 6\n");
    }
    else if (ind == 7)
    {
        printf("Grade 7\n");
    }
    else if (ind == 8)
    {
        printf("Grade 8\n");
    }
    else if (ind == 9)
    {
        printf("Grade 9\n");
    }
    else if (ind == 10)
    {
        printf("Grade 10\n");
    }
    else if (ind == 11)
    {
        printf("Grade 11\n");
    }
    else if (ind == 12)
    {
        printf("Grade 12\n");
    }
    else if (ind == 13)
    {
        printf("Grade 13\n");
    }
    else if (ind == 14)
    {
        printf("Grade 14\n");
    }
    else if (ind == 15)
    {
        printf("Grade 15\n");
    }
    else
    {
        printf("Grade 16+\n");
    }
}
