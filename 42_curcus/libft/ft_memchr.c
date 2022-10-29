/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:17:26 by oharoon           #+#    #+#             */
/*   Updated: 2022/10/29 16:38:11 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	size;

	size = 0;
	while (size < n)
	{
		if (((unsigned char *) s)[size] == (unsigned char)c)
			return ((void *)(s + size));
		size++;
	}
	return (0);
}
