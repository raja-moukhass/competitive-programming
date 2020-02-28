#include <stdio.h>
#include <math.h>

int     main()
{
    double A;
    double B;
    double C;
    double TRIANGULO;
    double CIRCULO;
    double TRAPEZIO;
    double QUADRADO;
    double RETANGULO;
    scanf("%lf%lf%lf", &A,&B,&C);
   // scanf("%lf", &B);
   // scanf("%lf", &C);
    TRIANGULO =(0.5)*(A * C);
    CIRCULO = (3.14159) * pow(C,2);
    TRAPEZIO =(0.5) * (A+B) * C;
    QUADRADO = pow(B,2);
    RETANGULO = A*B;



    printf("TRIANGULO: %.3lf\n",TRIANGULO);
    printf("CIRCULO: %.3lf\n",CIRCULO);
    printf("TRAPEZIO: %.3lf\n",TRAPEZIO);
    printf("QUADRADO: %.3lf\n",QUADRADO);
    printf("RETANGULO: %.3lf\n",RETANGULO);






}