#include <stdio.h>
#include <stdlib.h>
void count(int);

int main()
{
    printf("Hello world!\n");
    int age 25;
    count(age);
    return 0;
}

void count(int age){
    printf("My age is %d.\n", age);
}