#include <stdio.h>

int f(int *w1,int *w2){
    return *w1+*w2;
}

int main(){
    int a=15,b=13;
    int *w1=&a;
    int *w2=&b;
    printf("%d\n",f(w1,w2));
    return 0;
}