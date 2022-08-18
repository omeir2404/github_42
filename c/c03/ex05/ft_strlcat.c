/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:01:13 by oharoon           #+#    #+#             */
/*   Updated: 2022/08/18 11:29:10 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len1;
	unsigned int	len2;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	len1 = j;
	len2 = len(src);
	if (size == 0 || size <= len1)
		return (len2 + len1);
	while (src[i] != '\0' && i < size - len1 - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (len1 + len2);
}
