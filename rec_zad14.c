#include <stdio.h>
int potega(int x,int n){
    if(n==0)
        return 1;
    if(n==1)
        return x;
    if(n>1)
        return potega(x,n-1)*x;
}

int main(){
    int x,n;
    printf("Podaj liczbe i potege: ");
    scanf("%d,%d",&x,&n);
    printf("Liczba %d do potegi %d to: %d",x,n,potega(x,n));
    return 0;
}
