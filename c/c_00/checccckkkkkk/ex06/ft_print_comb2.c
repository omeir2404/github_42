/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:55:53 by oharoon           #+#    #+#             */
/*   Updated: 2022/08/20 14:56:15 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	putint(int num, int max)
{
	char	u;
	char	d;

	if (num <= 9)
	{
		u = num + 48;
		putchar('0', u);
	}
	else if (num <= max)
	{
		u = (num % 10) + 48;
		d = (num / 10) + 48;
		putchar(d, u);
	}
}

void	catint(int fir, int sec)
{
	putint(fir, 98);
	write(1, " ", 1);
	putint(sec, 99);
	if (fir != 98 || sec != 99)
		putchar(',', ' ');
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			catint(x, y);
			y++;
		}
		x++;
	}
}
