#include <stdio.h>
#include <math.h>

int     main()
{
    double   n;

    scanf("%lf", &n);
    n = n * 100;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100,00\n", (int)n/10000);
    n = (int)n % 10000;
     printf("%d nota(s) de R$ 50,00\n", (int)n/5000);
    n = (int)n%5000;
     printf("%d nota(s) de R$ 20,00\n", (int)n/2000);
    n = (int)n %2000;
     printf("%d nota(s) de R$ 10,00\n", (int)n/1000);
    n = (int)n % 1000;
     printf("%d nota(s) de R$ 5,00\n", (int)n/500);
    n = (int)n % 500;
      printf("%d nota(s) de R$ 2,00\n", (int)n/200);
    n = (int)n%200;
    printf ("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1,00\n", (int)n/100);
    n = (int)n%100;
    printf("%d moeda(s) de R$ 0,50\n", (int)n/50);
    n = (int)n%50;
    printf("%d moeda(s) de R$ 0,25\n", (int)n/25);
    n = (int)n%25;
    printf("%d moeda(s) de R$ 0,10\n", (int)n/10);
    n = (int)n%10;
    printf("%d moeda(s) de R$ 0,05\n", (int)n/5);
    n = (int)n%5;
    printf("%d moeda(s) de R$ 0,01\n", (int)n/1);
}