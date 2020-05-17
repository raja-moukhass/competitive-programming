#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int     main()
{
    int i;
    scanf("%d", &i);
    if ( i % 2 == 0)
    printf("Bob\n");
    else 
    printf("Alice\n");
}