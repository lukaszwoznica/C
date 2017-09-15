#include <stdio.h>
#include <stdlib.h>

void f(int **tab,int n,int m){
    int i;
    for(i=0;i<n;i++)
	free(tab[i]);
    free(tab);
}

int main(){
    int i,j;
    int **tab=malloc(sizeof(int*)*3);
	for(i=0;i<3;i++)
	    tab[i]=malloc(sizeof(int)*4);
    for(i=0;i<3;i++)
	for(j=0;j<4;j++)
	    scanf("%d",&tab[i][j]);
    for(i=0;i<3;i++){
	printf("\n");
	for(j=0;j<4;j++)
	    printf("%d",tab[i][j]);
    }
    f(tab,3,4);
    return 0;
}