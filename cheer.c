#include <stdio.h>
#include <stdlib.h>
void cheer(char*);
int main()
{
    char* team_name ="embedded";
    cheer(team_name);
    return 0;
}
void cheer(char* team_name){

 printf("Hello %s!\n",team_name);
}
