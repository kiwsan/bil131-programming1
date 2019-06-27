// Functions

#include <stdio.h>

//Function declerations
//These are used to inform the compiler about the fuctions we create below.
void say_hi_english();
void say_hi_thailand();
void say_hi_japan();

int main() {

    say_hi_english();
    say_hi_thailand();
    say_hi_japan();

    return 0;
}

void say_hi_english() {
    printf("Hello world\n");
}

void say_hi_thailand() {
    printf("สวัสดี ชาวโลก\n");
}

void say_hi_japan() {
    printf("konnichiwa sekai\n");
}