#include <stdio.h>
#include <stdlib.h>

int suma(int **tab,int n,int m){
    int i,j,suma=0;
    for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	    suma=suma+tab[i][j];
    return suma;
}

int main(){
    int i,j;
    int **tab=malloc(sizeof(int*)*2);
	for(i=0;i<2;i++)
	    tab[i]=malloc(sizeof(int)*3);
    for(i=0;i<2;i++)
	for(j=0;j<3;j++)
	    scanf("%d",&tab[i][j]);
    printf("\nSuma=%d\n",suma(tab,2,3));
    for(i=0;i<2;i++)
	free(tab[i]);
    free(tab);
    return 0;
}