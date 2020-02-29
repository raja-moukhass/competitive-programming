#include <unistd.h>
#include <math.h>
#include <stdio.h>

int     main()
{
    int a;
    int b;
    int c;
    int time;
    scanf ("%d", &time);
    a = time / 3600;
    b = (time % 3600)/60;
    c = time %60;
    printf("%d:%d:%d\n",a, b, c);

}