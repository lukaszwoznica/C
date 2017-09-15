#include <stdio.h>

int f(){
    int a;
    int *wa=&a;
    return *wa;
}

int main(){
    printf("%d",f());
    return 0;
}
