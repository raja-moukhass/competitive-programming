#include <stdio.h>

int	main()
{
	long long a;
	long long b;
	long long c;
	long long d;
	long long DIFERENCA;
	scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
	DIFERENCA = (a *b) - (c *d);
	printf("DIFERENCA = %lld\n",DIFERENCA);
	return 0;
}
