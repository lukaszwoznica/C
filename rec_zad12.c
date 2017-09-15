#include <stdio.h>
int a(int n){
    if(n==0 || n==1)
	return 1;
    if(n>1 && n%2==0)
	return a(n-1)+n;
    if(n>1 && n%2!=0)
	return a(n-1)*n;
}

int main(){
    int n;
    printf("Podaj liczbę: ");
    scanf("%d",&n);
    printf("%d element ciągu wynosi: %d\n",n,a(n));
}