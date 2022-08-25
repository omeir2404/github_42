/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:58:00 by oharoon           #+#    #+#             */
/*   Updated: 2022/08/18 11:20:45 by oharoon          ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	size;

	size = len(dest);
	while (*src != '\0')
	{
		dest[size] = *(unsigned char *)src;
		size++;
		src++;
	}
	dest[size] = '\0';
	return (dest);
}
