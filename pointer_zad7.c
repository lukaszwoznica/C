#include <stdio.h>
#include <math.h>

double abs_diff(double *a, double *b){
    return fabs(*a-*b);
}

int main(){
    double a,b;
    double *w1=&a;
    double *w2=&b;
    scanf("%lf,%lf",w1,w2);
    printf("%lf\n",abs_diff(w1,w2));
    return 0;
}