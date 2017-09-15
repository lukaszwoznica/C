#include <stdio.h>

void f(int i,int *w){
    *w=i;
}

int main(){
    int i,a=0;
    int *w=&a;
    scanf("%d",&i);
    printf("%d\n",a);
    f(i,w);
    printf("%d\n",a);
    return 0;
}