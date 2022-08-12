/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 19:22:52 by oharoon           #+#    #+#             */
/*   Updated: 2022/08/11 18:18:11 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int len;
	
	len = 0;//contador de char
	while(src[len] != '\0')
	{
		dest[len] = *(src + len);
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
