#include <stdio.h>
#include <math.h>

int     main()
{
    double A;
    double  B;
    double C;
    double delta;
    double R1;
    double R2;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    delta = pow(B,2) - (4*A*C);
    R1 = (-B + sqrt(delta))/(2*A);
    R2 = (-B - sqrt(delta))/(2*A);
    if ( A != 0 && delta > 0)
    {
        printf("R1 = %.5lf\n",R1);
        printf("R2 = %.5lf\n",R2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }
    
}