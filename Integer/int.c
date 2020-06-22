#include <cs50.h>
#include <stdio.h>

int main(void) {
  /* code */
    /*char answer[10];
    printf("What's your name?\n");
    scanf("%s",answer);
    printf("Hello %s\n", answer);*/
    string answer = get_string("What's your name?\n");
    printf("Hello, %s\n", answer);
}
