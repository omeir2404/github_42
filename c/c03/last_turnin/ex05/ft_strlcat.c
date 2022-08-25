/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:01:13 by oharoon           #+#    #+#             */
/*   Updated: 2022/08/25 16:51:17 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	len(char *a)
{
	unsigned int	i;

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
	if (size <= len(dest))
		return (size + len(src));
	len2 = len(dest);
	while (src[i] && len2 + 1 < size)
	{
		dest[len2] = src[i];
		i++;
		len2++;
	}
	dest[len2] = '\0';
	return (len(dest) + len(&src[i]));
}
