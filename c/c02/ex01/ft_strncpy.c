/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 19:22:52 by oharoon           #+#    #+#             */
/*   Updated: 2022/08/11 19:25:37 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;
	
c = 0;

	c = 0;//contador de char
	while(src[c] != '\0')
	{
		dest[c] = *(src + c) ;
		c++;
	}
	while(c <= n - 1)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
