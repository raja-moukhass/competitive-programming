i#include <stdio.h>

int main()
{
	double a;
	double b;
	double MEDIA;
	double aa ;
	double bb;

	scanf("%lf %lf",&a,&b);
	aa = a * 3.5 ;
	bb = b * 7.5;

	MEDIA  = (aa + bb) /11;
	printf("MEDIA = %.5lf\n",MEDIA);
	return 0;
}


