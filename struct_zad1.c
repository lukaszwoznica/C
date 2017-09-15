#include <stdio.h>
struct trojkat{
    int a,b,c;
};

int obwod(struct trojkat t){
    return t.a+t.b+t.c;
}

int main(){
    struct trojkat t;
    t.a=5;
    t.b=7;
    t.c=4;
    printf("%d\n",obwod(t));
    return 0;
}