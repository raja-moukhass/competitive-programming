#include <stdio.h>
#include <math.h>

int     main()
{
    int a,b;
    scanf("%d %d", &a,&b);
    if(a>0 && b >0)
    printf("1\n");
    if ( a>0 && b < 0)
    printf("4\n");
    if ( a < 0 && b >0)
    printf("2\n");
    if (a < 0 && b < 0)
    printf("3\n");
}