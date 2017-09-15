#include <stdio.h>
#include <stdlib.h>

void przepisz_pn(int* tab1, int* tab2, int* tab3, int n){
    int i,m=0,k=0;
    for(i=0; i<2*n; i++){
	if(i%2==0){
	    tab3[i]=tab1[m];
	    m++;
	}
	else{
	    tab3[i]=tab2[k];
	    k++;
	}
    }
}

int main(){
    int i,n;
    printf("Podaj liczbę n: ");
    scanf("%d",&n);
    int* tab1=malloc(sizeof(int)*n);
    int* tab2=malloc(sizeof(int)*n);
    int* tab3=malloc(sizeof(int)*2*n);
    printf("Podaj wartości do tablicy 1: \n");
    for(i=0; i<n; i++){
	scanf("%d",tab1[i]);
    }
    printf("Podaj wartości do tablicy 2: \n");
    for(i=0; i<n; i++){
	scanf("%d",tab2[i]);
    }
    printf("Podaj wartości do tablicy 3: \n");
    for(i=0; i<2*n; i++){
	scanf("%d",tab3[i]);
    }
    przepisz_pn(tab1,tab2,tab3,n);
    for(i=0;i<2*n;i++){
	printf("%d\n",tab3[i]);
    }
    free(tab1);
    free(tab2);
    free(tab3);
}