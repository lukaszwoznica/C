#include <stdio.h>
int a(int n){
    if(n==0)
	return 0;
    if(n==1)
	return 1;
    if(n>1)
	return a(n-1)+n;
}

int main(){
    int n;
    printf("Podaj liczbę: ");
    scanf("%d",&n);
    printf("%d element ciągu wynosi: %d\n",n,a(n));
}