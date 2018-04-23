#include <stdio.h>
#include <stdlib.h>

void greet(char*, int);

int main()
{
    char *name = "Gergely";
    int age = 34;
    printf("Hello branch!\n");
    greet(name);
    return 0;
}

void greet(char* name, int age)
{
    printf("Greetings tesa mester %s!\n", name);
}

