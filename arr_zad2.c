#include <stdio.h>
#include <stdlib.h>
float* utworz(int n){
    float *tab=calloc(n,sizeof(float));
    return tab;
}

float max(float* tab, int n){
    int i;
    int max=tab[0];
    for(i=1; i<n; i++){
	if(max<tab[i]){
	    max=tab[i];
	}
    }
    return max;
}

float min(float* tab, int n){
    int i;
    int min=tab[0];
    for(i=1; i<n; i++){
	if(min>tab[i]){
	    min=tab[i];
	}
    }
    return min;
}

float srednia(float* tab, int n){
    int i,suma=0;
    for(i=0; i<n; i++){
	suma=tab[i]+suma;
    }
    return suma/n;
}

float suma(float* tab, int n){
    int i,suma=0;
    for(i=0; i<n; i++){
	suma=tab[i]+suma;
    }
    return suma;
}

int main(){
    int n,i;
    printf("Podaj wielkość tablicy: ");
    scanf("%d",&n);
    float* tab=utworz(n);
    for(i=0; i<n; i++){
	scanf("%f",&tab[i]);
    }
    printf("Maksimum: %f\n",max(tab,n));
    printf("Minimum: %f\n",min(tab,n));
    printf("Srednia: %f\n",srednia(tab,n));
    printf("suma: %f\n",suma(tab,n));
    free(tab);
    return 0;
}