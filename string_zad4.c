#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void UsunPierwszyMinus(char tab[]){
    int i,k=0;
    char *tab1=malloc(sizeof(char)*(strlen(tab)-1));
    for(i=0;tab[i]!='\0';i++){
	if(tab[i]=='-'){
	    continue;
	}
	tab1[k]=tab[i];
	k++;
    }
    printf("%s",tab1);
}

int main(){
    char tab[50];
    fgets(tab,49,stdin);
    UsunPierwszyMinus(tab);
    return 0;
}