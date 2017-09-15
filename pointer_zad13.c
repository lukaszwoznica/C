#include <stdio.h>
int f(int n){
    int *tab=malloc(sizeof(int)*n);
    int *wsk=tab;
    return *wsk;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",f(n));
    return 0;
}
