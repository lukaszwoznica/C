#include <stdio.h>
int ilosc_cyfry(int n,int cyfra){
    if(n==0)
	return 0;
    else if(n%10==cyfra)
	return 1+ilosc_cyfry(n/10,cyfra);
    else
	return ilosc_cyfry(n/10,cyfra);
}

int main(){
    int n,cyfra;
    printf("Podaj liczbę: ");
    scanf("%d",&n);
    printf("Podaj cyfrę: ");
    scanf("%d",&cyfra);
    printf("W liczbie %d cyfra %d występuje %d razy.\n",n,cyfra,ilosc_cyfry(n,cyfra));
    return 0;
}