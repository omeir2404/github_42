/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:28:10 by oharoon           #+#    #+#             */
/*   Updated: 2022/08/09 16:22:28 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	neg;
	char	p;

	neg = 'N';
	p = 'P';
	if (n >= 0)
	{
		write(1, &p, 1);
	}
	else
	{
		write(1, &neg, 1);
	}
}

int main(void)
{
	ft_is_negative(8);
}