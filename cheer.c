#include <stdio.h>
#include <stdlib.h>
void cheer(char*);
int main()
{
    char* team_name ="C";
    cheer(team_name);
    return 0;
}
void cheer(char* team_name){

 printf("Chosen language is: %s!\n",team_name);
}
