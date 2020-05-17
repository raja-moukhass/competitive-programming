#include <stdio.h>
#include <unistd.h>

int     main()
{
    int n;
    int i;
    scanf("%d", &n);
    for (i=0;i <n; i++)
    {
        int x;
    scanf("%d", &x);
    if(x %2 == 0)
    printf("%d is even\n",x);
    else
    printf("%d is odd\n",x);
    }
}
