// Strings

#include <stdio.h>
#include <string.h> // string function are defined here.

int main() {

    // string are arrays of char.
    char s[20] = "Hello world"; // "Hello world" has 11 charecters, what about rest?
    char name[30];

    printf("What is your name?\n");
    scanf("%s", name);

    printf("%s\n", s);
    printf("Your name is %s\n", name);

    return 0;
}