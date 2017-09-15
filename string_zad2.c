#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *USUN_MALE(char tab[]){
    int i,ml=0,k=0;
    for(i=0;tab[i]!='\0';i++){
	if(tab[i]>='a' && tab[i]<='z')
	    ml++;
    }
    char *tab1=malloc(sizeof(char)*(ml+1));
    for(i=0;tab[i]!='\0';i++){
	if(tab[i]>='a' && tab[i]<='z'){
	    tab1[k]=tab[i];
	    k++;
	}
    }
    for(i=0;tab[i]!='\0';i++){
	if(tab[i]>='a' && tab[i]<='z'){
	    tab[i]=' ';
	}
    }
    return tab1;
}

int main(){
    char tab[50];
    fgets(tab,49,stdin);
    printf("%s\n",USUN_MALE(tab));
    printf("%s",tab);
    return 0;
}