/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:39:30 by oharoon           #+#    #+#             */
/*   Updated: 2022/10/29 12:40:40 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

char	*ft_strdup(const char *s)
{
	int		size;
	char	*dupped;

	size = ft_strlen(s);
	dupped = (char *)malloc(size + 1);
	if (!(dupped))
		return (0);
	ft_memcpy(dupped, s, size + 1);
	return (dupped);
}

/*#include <stdio.h>
int main(void)
{
	const char *s = "";
	char *dupped = ft_strdup(s);
	printf("mine: %s\n", dupped);
	dupped = strdup(s);
	printf("og: %s\n", dupped);
}*/