/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:22:03 by oharoon           #+#    #+#             */
/*   Updated: 2022/08/10 17:30:35 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *rand, int *point)
{
	int	a;

	a = *rand;
	*rand = *point;
	*point = a;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size -1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				swap(&tab[j], &tab[j + 1]);
			}
				j++;
		}
		i++;
	}
}
