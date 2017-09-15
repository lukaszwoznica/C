#include <stdio.h>
int f(int n){
    if(n<3)
	return 1;
    else
	return f(n-2)+f(n-1);
}

int main(){
    int n;
    printf("Podaj liczbę: ");
    scanf("%d",&n);
    printf("%d element ciągu Fibonacciego wynosi: %d\n",n,f(n));
}