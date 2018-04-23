#include <stdio.h>
#include <stdlib.h>
void cheer(char*, char*);
int main()
{
    char* team_name = "embedded";
    char* langue = "C";
    cheer(team_name, langue);
    return 0;
}
void cheer(char* team_name ){
 printf("Hello %s!\n",langue);
 printf("Chosen language is: %s!\n",team_name);
}
