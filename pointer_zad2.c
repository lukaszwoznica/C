#include <stdio.h>

void f(int *w1,int *w2){
    if(*w1>*w2){
	int w3;
	w3=*w1;
	*w1=*w2;
	*w2=w3;
    }
}

int main(){
    int a,b;
    int *w1=&a;
    int *w2=&b;
    scanf("%d,%d",w1,w2);
    printf("%d,%d\n",*w1,*w2);
    f(w1,w2);
    printf("%d,%d\n",*w1,*w2);
    return 0;
}
