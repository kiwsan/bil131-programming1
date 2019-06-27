// Functions

#include <stdio.h>

//take arguments from comand line.
int main(int argc, char** args, char** envp) {

    int i = 0;

    printf("Command line arguments:\n");
    for (i = 0; i < argc; i++)
    {
        printf("arg[%d] = '%s'\n", i, args[i]);
    }
    
    printf("\n-------------------\n");
    printf("Enivronment variables:\n");
    while (*envp)
    {
        printf("%s\n", *envp++);
    }
    
}