// Input/Output

#include <stdio.h>

int main() {

    int int_var = 0;
    char char_var = 0;
    float float_var = 0.0;

    printf("Scanf function reads user input to a variable.\n");

    printf("Please input a number:");
    scanf("%d", &int_var);

    printf("Please input a character: ");
    scanf(" %c", &char_var); //Don't forget the space here, otherwise it will not work properly, more on this later!

    printf("Plaese input a floating point number: ");
    scanf("%f", &float_var);

    printf("Your input is:]n");
    printf("Integer = %d\n", &int_var);
    printf("Charecter = %c\n", &char_var);
    printf("Floating point = %f\n", &float_var); 

    return 0;
}