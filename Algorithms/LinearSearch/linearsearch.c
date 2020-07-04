/*Linear Search*/

//LIBRARY FILE ACCESS
#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//SYMBOLIC CONSTANTS

//STRUCT
typedef struct
{
    string name;
    string number;
}
person;

//DEFINITION OF FUNCTIONS
bool numbers(void); //numbers
bool names(void); //names
bool names_and_numbers(void); //phonebook
bool structure_typedef(void); //use typedef

//MAIN FUNCTION HEADER.
int main(void)
{
    numbers();
    names();
    names_and_numbers();
    structure_typedef();

  return 0;
}

bool numbers(void)
{
    //VARIABLE DECLARATION
    int numbers[6] = {4, 8, 15, 16, 50, 42};
    //Loop for numbers
    for (int i = 0; i < 6; i++)
    {
        //Condition
        if (numbers[i] == 50)
        {
            /* code */
            printf("Number found in the position of the array %d\n", i+1);//OUTPUT INSTRUCTION
            return 0;
        }
    }
    printf("Not Found Number\n");//OUTPUT INSTRUCTION
    return 1;
}

bool names(void)
{
    //VARIABLE DECLARATION
    string names[4] = {"EMMA", "RODRIGO", "BRIAN", "DAVID"};
    //Loop for numbers
    for (int i = 0; i < 4; i++)
    {
        //Condition
        if (strcmp(names[i], "EMMA") == 0)
        {
            /* code */
            printf("Name found in the position of the array %d\n", i+1);//OUTPUT INSTRUCTION
            return 0;
        }
    }
    printf("Not Found Name\n");//OUTPUT INSTRUCTION
    return 1;
}

bool names_and_numbers(void)
{
    //VARIABLE DECLARATION
    string names[4] = {"EMMA", "RODRIGO", "BRIAN", "DAVID"};
    string numbers[4] = {"617-555-0100", "617-555-0101", "617-555-0102", "617-555-0103"};
    //Loop for numbers
    for (int i = 0; i < 4; i++)
    {
        //Condition
        if (strcmp(names[i], "EMMA") == 0)
        {
            /* code */
            printf("%s\n", numbers[i]);//OUTPUT INSTRUCTION
            return 0;
        }
    }
    printf("Not Found Name\n");//OUTPUT INSTRUCTION
    return 1;
}

bool structure_typedef(void)
{
    //VARIABLE DECLARATION
    person people[4];
    people[0].name = "EMMA";
    people[0].number = "617-555-0100";
    people[1].name = "RODRIGO";
    people[1].number = "617-555-0101";
    people[2].name = "BRIAN";
    people[2].number = "617-555-0102";
    people[3].name = "DAVID";
    people[3].number = "617-555-0103";
    //Loop for numbers
    for (int i = 0; i < 4; i++)
    {
        //Condition
        if (strcmp(people[i].name, "EMMA") == 0)
        {
            /* code */
            printf("%s\n", people[i].number);//OUTPUT INSTRUCTION
            return 0;
        }
    }
    printf("Not Found Name\n");//OUTPUT INSTRUCTION
    return 1;
}
