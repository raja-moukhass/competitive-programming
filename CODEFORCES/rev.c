#include <unistd.h>
#include <stdio.h>

void	writword(char *str)
{
	while(*str && *str != ' ' && *str != '\t' )
	{
		write(1, str, 1);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	if (argc == 2)
	{
		i = 0;
		while(argv[1][i])
			i++;
		i--;
		while(argv[1][i] && i > 0)
		{
			while(argv[1][i] != ' ' && argv[1][i] != '\t' && i > 0)
				i--;
			if (i== 0)
				writword(argv[1]);
			else 
				writword(argv[1] + i + 1);
			if (i > 0 )
				write (1, " ", 1);
			while((argv[1][i] == '\t' || argv[1][i] == ' ') && i > 0)
				i--;

		}
	}
	write(1, "\n", 1);
	return(0);
}

/*#include <unistd.h>

void	writeword(char *str)
{
	while (*str && *str != ' ' && *str != '\t')
	{
		write(1, str, 1);
		str++;
	}
}

int 	main(int ac, char **av)
{
	int i;
	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
			i++;
		i--;
		while (av[1][i] && i > 0)
		{
			while (av[1][i] != 32 && av[1][i] != '\t' && i > 0)
				i--;
			if (i == 0)
				writeword(av[1]);
			else
				writeword(av[1] + i + 1);
			if (i > 0)
				write(1, " ", 1);
			while ((av[1][i] == ' ' || av[1][i] == '\t') && i > 0)
				i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
*/
