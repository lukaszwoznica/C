#include <stdio.h>
#include <stdlib.h>

void f(int **tab1,int **tab2,int n,int m){
    int i,j,tmp;
    for(i=0;i<n;i++)
	for(j=0;j<m;j++){
	    tmp=tab1[i][j];
	    tab1[i][j]=tab2[i][j];
	    tab2[i][j]=tmp;
	}
}

int main(){
    int i,j;
    int **tab1=malloc(sizeof(int*)*2);
	for(i=0;i<2;i++)
	    tab1[i]=malloc(sizeof(int)*2);
    int **tab2=malloc(sizeof(int*)*2);
	for(i=0;i<2;i++)
	    tab2[i]=malloc(sizeof(int)*2);
    for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	    scanf("%d",&tab1[i][j]);
    for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	    scanf("%d",&tab2[i][j]);
    f(tab1,tab2,2,2);
    printf("Tab1:\n");
    for(i=0;i<2;i++){
	printf("\n");
	for(j=0;j<2;j++)
	    printf("%d",tab1[i][j]);
    }
    printf("\nTab2:\n");
    for(i=0;i<2;i++){
	printf("\n");
	for(j=0;j<2;j++)
	    printf("%d",tab2[i][j]);
    }
    printf("\n");
    for(i=0;i<2;i++)
	free(tab1[i]);
    free(tab1);
    for(i=0;i<2;i++)
	free(tab2[i]);
    free(tab2);
    return 0;
}