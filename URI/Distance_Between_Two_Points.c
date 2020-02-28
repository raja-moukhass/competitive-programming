#include <unistd.h>
#include <stdio.h>
#include <math.h>

int     main()
{
    double x1;
    double x2;
    double y1;
    double y2;
    double y;
    double x;
    double distance;
    scanf( "%lf", &x1);
    scanf( "%lf", &y1);
    scanf( "%lf", &x2);
    scanf( "%lf", &y2);
    x = (x2-x1);
    y = (y2-y1);
    distance = sqrt(x*x + y*y);
   printf("%.4lf\n",distance);
   return(0);
  

}