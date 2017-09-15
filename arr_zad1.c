#include <stdio.h>
#include <stdlib.h>
float* utworz(int n){
    float *tab=calloc(n,sizeof(float));
    return tab;
}

int main(){
    float* tab=utworz(5);
    int i;
    for(i=0; i<5; i++){
	printf("%f,",tab[i]);
    }
    free(tab);
    return 0;
}