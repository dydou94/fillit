/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 13:28:43 by dyuzan            #+#    #+#             */
/*   Updated: 2016/01/13 14:54:17 by dyuzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_stock(char *tetriminos);
int		ft_check(char *check);
void	ft_check2(char *check);

struct	s_cord
{
	int x;
	int y;
};






















#endif
