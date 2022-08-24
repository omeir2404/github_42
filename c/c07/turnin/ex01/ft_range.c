/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:19:44 by oharoon           #+#    #+#             */
/*   Updated: 2022/08/22 17:27:27 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*array;

	i = 0;
	size = max - min;
	if (min >= max)
		return ((int *)0);
	array = malloc(size * sizeof(int));
	if (array == NULL)
		return ((int *)0);
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
