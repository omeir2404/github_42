/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:12:40 by oharoon           #+#    #+#             */
/*   Updated: 2022/10/29 12:14:59 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	const char	*start;
	int			len;

	len = ft_strlen(s);
	start = s;
	s += len;
	while (*s != *start && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}

/*int main(void)
{
	const char str[] = "hello world\n";
	printf("%s", ft_strrchr(str, 111));
	printf("%s", strrchr(str, 111));
}*/