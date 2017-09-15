#include <stdio.h>
struct trojkat{
    int a,b,c;
};

void f(struct trojkat troj1, struct trojkat *troj2){
    *troj2=troj1;
}

int main(){
    struct trojkat t1,t2,*w;
    t1.a=4;
    t1.b=6;
    t1.c=9;
    w=&t2;
    f(t1,w);
    printf("%d\n",t2.a);
    printf("%d\n",w->a);
    return 0;
}