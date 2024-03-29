//Memory management

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10

int main() {

    int i = 0;

    //create an array
    int* a = malloc(sizeof(int) * SIZE);

    //initializer the array
    memset(a, 0, sizeof(int) * SIZE);

    for (i = 0; i < sizeof(int); i++)
    {
        *(a + i) = i;
        printf("%d\n", *(a + i));
    }
    
    //deallocate the memory
    free(a);

    return 0;
}