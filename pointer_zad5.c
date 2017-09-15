#include <stdio.h>

int f(int *w1,int *w2){
    if(*w1>=*w2)
	return *w2;
    else
	return *w1;
}

int main(){
    int a,b;
    int *w1=&a;
    int *w2=&b;
    scanf("%d,%d",w1,w2);
    printf("%d\n",f(w1,w2));
    return 0;
}