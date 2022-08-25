/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:59:59 by oharoon           #+#    #+#             */
/*   Updated: 2022/08/17 17:00:20 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	size;

	i = 0;
	size = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[size] != '\0' && size < nb)
	{
		dest[i + size] = src[size];
		size++;
	}
	dest[i + size] = '\0';
	return (dest);
}
