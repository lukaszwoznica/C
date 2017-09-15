#include <stdio.h>
void zakres_liczb(int x){
    if(x<0) return;
    zakres_liczb(x-1);
    printf("%d\n",x);
}
int main(){
    int x;
    printf("Podaj liczbe: ");
    scanf("%d",&x);
    if(x==0) printf("0\n");
    else zakres_liczb(x);
    return 0;
}
