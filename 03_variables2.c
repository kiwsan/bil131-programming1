// Variables and scope

#include <stdio.h>

// The variables defined outside the functions are global variables and can be accessed from anywhere in the code.
int  i = 3;

int main() {

    // redefining the same variable, it is no longer global and can only accessed from this block.
    int i = 5;

    if (i != 3) {

        printf("i is not 3\n");
    }

    printf("The value iof i is %D\n", i);

    return 0;
}