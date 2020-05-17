#include <stdio.h>
#include <math.h>

int     main()
{
    double a;
    double i;
    double m;
          double x;

     double f;
    scanf("%lf",&a);
    for(i=0; i <a; ++i)
    {
        //double m;
        double f;
        scanf("%lf", &m);
        scanf("%lf", &f);
       // double mul;
        m *= f;
          //printf("%.3lf\n\n", m);
          x += m ;
    }
    printf("%.3lf\n",x);
}