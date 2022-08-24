/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 12:30:37 by oharoon           #+#    #+#             */
/*   Updated: 2022/08/21 14:32:57 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	aux;

	aux = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else if (nb > 0)
	{
		aux = nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	return (aux);
}
