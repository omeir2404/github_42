/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:35:53 by oharoon           #+#    #+#             */
/*   Updated: 2022/10/29 12:38:30 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	size;

	size = 0;
	while (size < len)
	{
		((unsigned char *)b)[size] = c;
		size++;
	}
	return (b);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*dest;

	total = nmemb * size;
	dest = malloc(total);
	if (!(dest))
		return (0);
	ft_memset(dest, 0, total);
	return (dest);
}
