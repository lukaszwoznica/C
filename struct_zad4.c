#include <stdio.h>
struct punkt{
    int x,y,z;
};

void f(struct punkt tab1[],struct punkt tab2[], int n){
    int i;
    for(i=0;i<n;i++){
	tab2[i]=tab1[i];
    }
}

int main(){
    int n=3;
    struct punkt tab1[n],tab2[n];
    tab1[0].x=3;
    tab1[0].y=6;
    tab1[0].z=8;
    f(tab1,tab2,n);
    printf("%d\n",tab2[0].x);
    return 0;
}