// structures

#include <stdio.h>
#include <string.h>

//struct definition
struct person
{
    char name[10];
    int age;
};

int main() {

    //create and initial structs
    struct person p = {"plar", 30};

    //we can access the variables with "."
    p.age = 25;
    strcpy(p.name, "Plar");

    printf("%s is %d years old\n", p.name, p.age);

    return 0;
}
