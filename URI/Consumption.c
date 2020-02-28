#include <stdio.h>
#include <math.h>

int     main()
{
    long long a;
    double b;
    scanf ("%lld",&a);
    scanf ("%lf", &b);
    printf("%.3lf km/l\n", a/b);
}