/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:21:39 by oharoon           #+#    #+#             */
/*   Updated: 2022/08/07 16:58:28 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	checkelements(int x, int y, int r, int c)
{
	if ((r == 1) || (r == y))
	{
		if (((r == 1) && (c == 1)) || ((r == 1) && (c == x)))
			ft_putchar('A');
		else if (((r == y) && (c == 1)) || ((r == y) && (c == x)))
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
	}
	else if ((c == 1) || (c == x))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	r;
	int	c;

	r = 1;
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			checkelements(x, y, r, c);
			c ++;
		}
		r ++;
		ft_putchar('\n');
	}
}
