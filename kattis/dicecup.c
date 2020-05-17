#include <stdio.h>
#include <stdlib.h>

int     main()
{
    int a;
    int b;
    int i;
    scanf("%d",&a);
    scanf("%d", &b);
    if ( a == b )
    printf("%d\n",a+1);
    else if ( a < b)
    {
    for(i = a +1; i <= b; i++)

    printf("%d\n", i);
    printf("%d\n", i);
    }
    else
    {
          for(i = b +1; i <= a; i++)

    printf("%d\n", i);
    printf("%d\n", i);
    }


    

    
}