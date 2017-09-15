#include <stdio.h>

int POROWNAJ_ILOSC(char tab[]){
    int i,male=0,duze=0;
    for(i=0;tab[i]!='\0';i++){
	if(tab[i]>='a' && tab[i]<='z')
	    male++;
	else if(tab[i]>='A' && tab[i]<='B')
	    duze++;
    }
    if(male>duze) return -1;
    else if(male==duze) return 0;
    else if(male<duze) return 1;
}

int main(){
    char tab[50];
    fgets(tab,49,stdin);
    printf("%d\n",POROWNAJ_ILOSC(tab));
    return 0;
}