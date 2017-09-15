#include <stdio.h>
int f(int n,int m){
  if(m==0)
    return n;
  if (n==0)
    return m;
  if(n>0 && m>0)
    return f(n-1,m)+f(n,m-1)+f(n-1,m-1);
}

int main(){
    int n,m;
    printf("Podaj dwie liczby: ");
    scanf("%d,%d",&n,&m);
    printf("f(%d,%d)=%d",n,m,f(n,m));
    return 0;
}
