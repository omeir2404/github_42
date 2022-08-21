/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:26:16 by oharoon           #+#    #+#             */
/*   Updated: 2022/08/20 18:44:22 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ver_base(char *base)
{
	int	i;
	int	b;

	i = 0;
	while (base[i])
	{
		b = i + 1;
		while (base[b])
		{
			if (base[i] == base[b])
				return (0);
			b++;
		}
		i++;
	}
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	aux(int nbr, char *base, int size)
{
	unsigned int	n;
	char			c;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = -nbr;
	}
	else
		n = nbr;
	if (n >= (unsigned int)size)
		aux(n / size, base, size);
	c = base[n % size];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	i;

	i = 0;
	if (ver_base(base) == 1)
	{
		while (base[i] != '\0')
			i++;
		aux(nbr, base, i);
	}
}
