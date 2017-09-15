#include <stdio.h>

int avg(int a, int b, int *result){
    if(*result == NULL)
        return 0;
    else{
        *result=(a+b)/2;
        return 1;
    }
}

int main(){
    int a,b,c;
    int *result;
    scanf("%d,%d",&a,&b);
    printf("%d\n",avg(a,b,result));
    return 0;
}
