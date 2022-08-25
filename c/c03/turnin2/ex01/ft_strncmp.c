/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 10:23:23 by oharoon           #+#    #+#             */
/*   Updated: 2022/08/18 10:54:39 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	diff = 0;
	i = 0;
	while ((i < n) && !diff && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		diff = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	if (i < n && !diff && (s1[i] == '\0' || s2[i] == '\0'))
		diff = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (diff);
}
