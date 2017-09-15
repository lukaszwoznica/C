#include <stdio.h>
#include <stdlib.h>

int ***f(int n,int m,int k){
    int x,y;
    int ***tab=malloc(sizeof(int**)*n);
	for(x=0;x<n;x++){
	    tab[x]=malloc(sizeof(int*)*m);
	    for(y=0;y<m;y++)
		tab[x][y]=malloc(sizeof(int)*k);
	}
    return tab;
}