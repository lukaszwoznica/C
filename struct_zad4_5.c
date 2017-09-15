#include <stdio.h>
#include <stdlib.h>

struct str{
    int liczba;
    char napis[50];
}


int main(){
    struct str tab1[10];
    struct str *tab2=malloc(sizeof(struct str)*10);
    struct str *tab3[10];
    int i;
    for(i=0;i<10;i++){
	tab3[i]=malloc(sizeof(struct str)*1);
    }
    for(i=0;i<10;i++){
	scanf("%d",&tab1[i].liczba);
	fg
    }
}