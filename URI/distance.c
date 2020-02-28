#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    double km;
    double h;
    double litres;


    scanf("%lf", &km);
    scanf("%lf", &h);
    litres = (h/12) * km;
    printf( "%.3lf\n",litres);
}