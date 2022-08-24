/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:55:53 by oharoon           #+#    #+#             */
/*   Updated: 2022/08/21 14:53:16 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_divisable(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_prime(int nb)
{
	if (ft_is_divisable(nb) == 1 && nb != 1 && nb > 0)
		return (1);
	return (0);
}
