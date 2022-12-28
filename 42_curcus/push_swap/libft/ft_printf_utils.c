/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:18:41 by oharoon           #+#    #+#             */
/*   Updated: 2022/12/27 15:19:11 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	pointerhandle(unsigned long int nb)
{
	if (nb == 0)
		return (write(1, "(nil)", 5));
	return (write(1, "0x", 2) + converter_ptr(nb, "0123456789abcdef", 16));
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		str = "(null)";
	while (str[i])
		i++;
	return (write(1, str, i));
}

int	converter(double nbr, char *base, double size)
{
	int		count;

	count = 0;
	if (nbr < 0)
	{
		count += write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= size)
		count += converter(nbr / size, base, size);
	count += write(1, &base[((unsigned long) nbr) % ((unsigned long)size)], 1);
	return (count);
}

int	converter_ptr(unsigned long nbr, char *base, unsigned long size)
{
	int		count;

	count = 0;
	if (nbr >= size)
		count += converter_ptr(nbr / size, base, size);
	count += write(1, &base[nbr % size], 1);
	return (count);
}
