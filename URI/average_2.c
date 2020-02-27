#include <stdio.h>

int	main()
{
	double a;
	double b;
	double c;
	double MEDIA;
	double aa ;
	double bb;
	double cc;

	scanf("%lf %lf %lf",&a,&b,&c);
	aa = a * 2 ;
	bb = b * 3;
	cc = c * 5;

	MEDIA  = (aa + bb + cc) /10;
	printf("MEDIA = %.1lf\n",MEDIA);
	return 0;
}
