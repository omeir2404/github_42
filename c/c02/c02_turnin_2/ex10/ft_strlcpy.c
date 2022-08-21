/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 19:22:52 by oharoon           #+#    #+#             */
/*   Updated: 2022/08/14 13:54:04 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	ind;
	unsigned int	len;

	ind = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (size != 0)
	{
		while (src[ind] != '\0' && ind < size -1)
		{
			dest[ind] = *(src + ind);
			ind++;
		}
		dest[ind] = '\0';
	}
	return (len);
}
