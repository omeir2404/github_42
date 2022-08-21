/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:29:49 by oharoon           #+#    #+#             */
/*   Updated: 2022/08/10 17:30:12 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
	int	swap;

	first = 0;
	size = size -1;
	while (first <= size)
	{
		swap = tab[first];
		tab[first] = tab[size];
		tab[size] = swap;
		first++;
		size--;
	}
}
