#include <stdio.h>
#include <unistd.h>
#include <math.h>

int     main()
{
    int     A;
    int     B;
    int     C;
    int     D;

    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    scanf("%d",&D);
    
   if( (B > C) && (D > A) && ((C + D) > (A + B)) && (C > 0) && (D > 0) && ( A % 2 == 0))
   printf("Valores aceitos\n");
   else
   printf("Valores nao aceitos\n");
   
}