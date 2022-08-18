/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:39:15 by oharoon           #+#    #+#             */
/*   Updated: 2022/08/08 19:32:01 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a != 57 || b != 56 || c != 57 || d != 57)
	{
		write(1, &", ", 2);
	}
}

void	whilez(char w, char x, char y, char z)
{
	while (z < 58)
	{
		if (w + x < y + z)
		{
			ft_putchar(w, x, y, z);
		}
	z++;
	}
}

void	ft_print_comb2(void)
{
	char	w;
	char	x;
	char	y;
	char	z;

	w = 48;
	x = 48;
	y = 48;
	z = 49;
	while (w < 58)
	{
		while (x < 58)
		{
			while (y < 58)
			{
				whilez(w, x, y, z);
			z = 48;
			y++;
			}
		y = 48;
		x++;
		}
	x = 48;
	w++;
	}
}
