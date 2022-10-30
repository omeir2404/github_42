/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:11:01 by oharoon           #+#    #+#             */
/*   Updated: 2022/10/30 15:17:52 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (c != *s && *s != '\0')
		s++;
	if (c == *s)
		return ((char *)s);
	return (0);
}

/*int main(void)
{
	const char str[] = "hello world\n";
	printf("%s", ft_strchr(str, 111));
	printf("%s", strchr(str, 111));
}*/