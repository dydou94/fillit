/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_openreadstock.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 09:05:38 by dyuzan            #+#    #+#             */
/*   Updated: 2016/01/11 14:57:43 by dyuzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 5555

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str++);
	}
}

char	*ft_stock(char *tetriminos)
{
	int				fd;
	static char		buf[BUF_SIZE];
	int				ret;

	fd = open(tetriminos, O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
	}
	return (buf);
}

void	ft_check(char *check)
{
	while (*check)
	{
		if (*check != '.' &&  *check != '#' && *check != '\n')
		{
		ft_putstr("INVALIDE TETRIMINOS");
		break;
		}
		check++;
	}
}

void	ft_check2(char *check)
{
	int i = 0;
	int dz_line = 0;

	while (*check)
	{
		if (*check == '\n' || *check == '#')
		dz_line++;
		if (i != 21 && dz_line != 9)
		{
			ft_putstr("INVALIDE TETRIMINOS");
			break;
		}
		if (dz_line == 9 && i == 21)
		{
		dz_line = 0;
		i = 0;
		}
		i++;
		check++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_check2(ft_stock(argv[1]));
	return (0);
}
