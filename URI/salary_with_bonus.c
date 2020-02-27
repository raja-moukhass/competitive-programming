#include <stdio.h>

int main ()
{
	char raja[10]= " ";
	double a ;
	double b;
	double TOTAL;
	scanf ("%s", raja);
	scanf ("%lf", &a);
	scanf("%lf",&b);
	TOTAL = a + (0.15 * b);
	printf("TOTAL = R$ %.2lf\n", TOTAL);

}
