#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void f(char tab[]){
    int dl=strlen(tab);
    int x=3+dl+1;
    char *t=malloc(sizeof(char)*x);
    strcpy(t,">");
    strcat(t,"\"");
    strcat(t,tab);
    int a=strlen(tab)+2;
    t[a-1]='\0';
    strcat(t,"\"");
    printf("%s",t);
}

int main(){
    char tab[100];
    fgets(tab,99,stdin);
    f(tab);
    return 0;
}