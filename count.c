#include <stdio.h>
#include <stdlib.h>
void count(int, int);

int main()
{
    printf("Hello world!\n");
    int age = 25;
    int month = 4;
    count(age, month);
    return 0;
}

void count(int age, int month){
    printf("My age is %d.\n", age);
    printf("I was born in %dth month", month);

}
