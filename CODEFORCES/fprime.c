#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int div;
	int nb;
	div = 2;
	if (argc == 2)
	{
	   	nb = atoi(argv[1]);
		if (nb == 1)
			printf("1");
		while (nb >= div)
		{
			if (nb % div == 0)
			{
				printf("%d", div);
				if (nb == div)
					break;
				printf("*");
				nb = nb / div;
				div = 1;
			}
			div++;

		}

	}

}

