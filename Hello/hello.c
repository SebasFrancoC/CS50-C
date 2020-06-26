#include <cs50.h>
#include <stdio.h>

int main(void)
{
    /* code */
    string name = get_string("Hello! What's your name?\n");
    printf("Nice to meet you %s!\n", name);
    return 0;
}
