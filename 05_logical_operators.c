// Logical operators

#include <stdio.h>

int main() {

    if (3 > 5 && 1 < 3) { //and

        printf("3 is greater then 1 and less then 5\n");
    }

    if (3 > 5 || 10 < 3) { //or

        printf("3 is greater then 1 or less then 10\n");
    }

    if (!(5 > 10)) { //not (logical complement)
        printf("5 is not greater then 10\n");
    }

    return 0;
}