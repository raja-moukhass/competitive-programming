/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramoukha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 16:34:25 by ramoukha          #+#    #+#             */
/*   Updated: 2020/03/13 11:40:53 by ramoukha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "unistd.h"
#include "stdlib.h"
char	*brakets(char *src, int way)
{
	int	i;
	i = 0;
	while (1)
	{
		if (*src == '[')
			i++;
		if (*src == ']')
			i--;
		if (i == 0)
			return (src);
		src = src + way;
	}
	return (NULL);
}
void	brainfuck(char *s)
{
	char 	*buff;
	buff = malloc(4096);
	while (*s != '\0')
	{
		if (*s == '>')
			buff++;
		if (*s == '<')
			buff--;
		if (*s == '+')
			*buff = *buff + 1;
		if (*s == '-')
			*buff = *buff - 1;
		if (*s == '[' && *buff == '\0')
			s = brakets(s, 1);
		if (*s == ']' && *buff != '\0')
			s = brakets(s, -1);
		if (*s == '.')
			write(1, *&buff, 1);
		s++;
	}
}
int		main(int argc, char **argv)
{
	if (argc == 2)
		brainfuck(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}
