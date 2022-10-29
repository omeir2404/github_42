/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:14:15 by oharoon           #+#    #+#             */
/*   Updated: 2022/10/29 11:14:35 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(char c)
{
	if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97))
		return (1);
	else
		return (0);
}

/*int main(void)
{
	char c = 'j';
	int i = ft_isalpha(c);
	printf("%d\n", i);
	int b = ft_isalpha(c);
	printf("%d", b);
}*/