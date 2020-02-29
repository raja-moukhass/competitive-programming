#include <stdio.h>
#include <math.h>

int     main()
{
    int jours;
    int a;
    int b;
    int c;

    scanf("%d", &jours);
    a = jours / 365;
    b = jours % 365 / 30;
    c = (jours % 365) % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a, b, c );
}