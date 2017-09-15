#include <stdio.h>
#include <stdlib.h>

void f(int ***tab,int n,int m,int k){
    int x,y;
    for(x=0;x<n;x++){
	for(y=0;y<m;y++){
	    free(tab[x][y];
	}
	free(tab[x]);
    }
    free(tab);
}