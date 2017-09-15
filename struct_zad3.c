#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct punkt
{
    int x,y,z;
};

double z3(struct punkt t[],int n)
{
    int i,j;
    double w,wyn=-1;
    for(i=0;i<n;i++)
    {
	j=i+1;
	if (j==n) j=0;
	w=sqrt(pow(t[i].x-t[j].x,2)+pow(t[i].y-t[j].y,2)+pow(t[i].z-t[j].z,2));
	if (wyn==-1) wyn=w;
	if (w<wyn) wyn=w;
    }
    return wyn;
}

int main()
{
    struct punkt tab[3];
    tab[0].x=1;
    tab[0].y=1;
    tab[0].z=1;
    tab[1].x=3;
    tab[1].y=3;
    tab[1].z=3;
    tab[2].x=2;
    tab[2].y=2;
    tab[2].z=2;
    printf("%lf",z3(tab,3));
    return 0;
}
