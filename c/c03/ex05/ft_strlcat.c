/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:01:13 by oharoon           #+#    #+#             */
/*   Updated: 2022/08/18 12:44:03 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len2;

	i = 0;
	len2 = len(dest);
	while (src[i])
	{
		dest[i + len2] = src[i];
		i++;
	}
	dest[len2 + i] = '\0';
	return (dest);
}
