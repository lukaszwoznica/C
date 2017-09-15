#include <stdio.h>
#include <stdlib.h>

void parzyste_elementy(int* tab, int n){
    int i;
    printf("Parzyste elementy tablicy: \n");
    for(i=0; i<n; i++){
	if(tab[i]%2==0){
	    printf("%d,",tab[i]);
	}
    }    
    printf("\n");
}


int main(){
    int* tab=malloc(sizeof(int)*6);
    int i;
    printf("Podaj wartości do tablicy: ");
    for(i=0; i<6; i++){
	scanf("%d",&tab[i]);		
    }
    parzyste_elementy(tab,6);
    free(tab);
    return 0;
}