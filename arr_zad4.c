#include <stdio.h>
#include <stdlib.h>

void wart_nieparzyste_indeksy(int* tab, int n){
    int i;
    printf("Wartości z nieparzystych indeksów tablicy: \n");
    for(i=1; i<n; i+=2){
	    printf("%d,",tab[i]);	
    }    
    printf("\n");
}


int main(){
    int* tab=malloc(sizeof(int)*6);
    int i;
    printf("Podaj wartości do tablicy: \n");
    for(i=0; i<6; i++){
	scanf("%d",&tab[i]);		
    }
    wart_nieparzyste_indeksy(tab,6);
    free(tab);
    return 0;
}