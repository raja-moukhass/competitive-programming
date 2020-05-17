#include <stdio.h>
#include <unistd.h>

int     main()
{
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf( "%d\n", (a*b) -a+1);
}