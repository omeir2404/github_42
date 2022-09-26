/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:28:37 by oharoon           #+#    #+#             */
/*   Updated: 2022/08/22 17:30:02 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		let;
	int		word;
	char	*point;
	int		all;

	point = malloc(sizeof(strs));
	all = 0;
	word = 0;
	while (word < size)
	{
		let = 0;
		while (strs[word][let] != '\0')
		{
			point[all++] = strs[word][let++];
		}
		let = 0;
		while (sep[let] != '\0' && word != size - 1)
		{
			point[all++] = sep[let++];
		}
		word++;
	}
	point[all] = '\0';
	return (point);
}
