#include <stdio.h>
#define MAX(a,b) (a>=b)? a : b
#define MAX2(a,b) (a>=b)? printf("%d\n",a) : printf("%d\n",b) 
#define SUMA(a,b,c) a+b+c
#define MAKRO_FOR(x,n) for(x=0; x<=n-1; x++) printf("%d,",x)
#define ZERUJ(x) x=0
#define DODAJ_2(x) x+=2
#define CZY_PARZYSTA(x) (x%2==0)? 1 : 0
#define MINMAX(v,a,b) (a>v)? a :((b<v)? b : v) 
#define S(t,i) scanf(t,&i);
/* zad10 */
#define DEBUG
#if defined DEBUG
    #define assert(war) {if(!(war)) printf("%s,%s,%d\n",#war,__FILE__,__LINE__);}
#else
    #define assert(war)
#endif
/* Koniec zad10 */
#define NOWY_WIERSZ() printf("\n");
#define SUMA2(a,b) a+b
#define KWADRAT(a) a*a
#define TEMP_CELC_FAHR(t) (9.0/5.0)*t+32
#define TEMP_FAHR_CELC(t) (5.0/9.0)*(t-32)
#define WYSWIETL(a) printf("%s=%d\n",#a,a);
int main(){
    printf("Zadanie 1: \n");
	printf("%d\n",MAX(3,4));

    printf("Zadanie 2: \n");
	MAX2(4,8);
    
    printf("Zadanie 3: \n");
	printf("%d\n",SUMA(3,5,8));
    
    printf("Zadanie 4: \n");
	int i;
	MAKRO_FOR(i,8);
	printf("\n");
    
    printf("Zadanie 5: \n");
	int x=5;
	printf("Przed: %d\n",x);
	ZERUJ(x);
	printf("Po: %d\n",x);

    printf("Zadanie 6: \n");
	int a=4;
	printf("Przed: %d\n",a);
	DODAJ_2(a);
	printf("Po: %d\n",a);
    
    printf("Zadanie 7: \n");
	int b=8,c=9;
	printf("%d\n",CZY_PARZYSTA(b));
	printf("%d\n",CZY_PARZYSTA(c));
printf("Zadanie 6: \n");

    printf("Zadanie 8: \n");
	int v;
	a=3, b=5, v=4;
	printf("%d\n",MINMAX(v,a,b));

    printf("Zadanie 9: \n");
	int m;
	S("%d",m);

    printf("Zadanie 10: \n");
	a=5;
	assert(a>10);

    printf("Zadanie 11: \n");
	printf("Tekst");
	NOWY_WIERSZ();
	printf("Tekst2");
	NOWY_WIERSZ();

    printf("Zadanie 12: \n");
	a=6,b=8;
	printf("%d\n",SUMA2(a,b));

    printf("Zadanie 13: \n");
	a=4;
	printf("%d\n",KWADRAT(a));

    printf("Zadanie 15: \n");
	int t=25;
	printf("%f\n",TEMP_CELC_FAHR(t));

    printf("Zadanie 16: \n");
	t=77;
	printf("%f\n",TEMP_FAHR_CELC(t));
    
    printf("Zadanie 17: \n");
	WYSWIETL(a);
    return 0;
}