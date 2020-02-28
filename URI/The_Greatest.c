#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int maior;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if ( a >= c && a >= b)
    printf("%d eh o maior\n", a);
     else if ( c >= a && c >= b)
     printf("%d eh o maior\n", c);
     else if ( b >= a && b >= c)
     printf("%d eh o maior\n", b);

}