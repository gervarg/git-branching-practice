#include <stdio.h>
#include <stdlib.h>

void greet(char*);

int main()
{
    char *name = "Gergely";
    printf("Hello branch!\n");
    greet(name);
    return 0;
}

void greet(char* name)
{
    printf("Greetings %s, you embedded guy!\n", name);
}

