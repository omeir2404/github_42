/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 13:45:11 by oharoon           #+#    #+#             */
/*   Updated: 2022/08/14 13:49:02 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	while (str[size] != '\0')
	{
		if (i == 0 && (str[size] >= 97 && str[size] <= 122))
		{
			str[size] = str[size] - 32;
			i++;
		}
		else if (i > 0 && (str[size] >= 65 && str[size] <= 90))
		{
			str[size] = str[size] + 32;
		}
		else if ((str[size] < '0') || (str[size] > '9' && str[size] < 65)
			|| (str[size] > 90 && str[size] < 97) || (str[size] > 122))
				i = 0;
		else
			i++;
		size++;
	}
	return (str);
}
