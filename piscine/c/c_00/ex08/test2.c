/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 10:39:56 by afernand          #+#    #+#             */
/*   Updated: 2022/08/08 15:44:19 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int g_lenght;
char g_array[10];

void	rec(int prev, int n)
{
	int i;

	if (n == g_lenght) //
	{
		write(1, g_array, g_lenght);
		write(1, ", ", 2);
		return ;
	}
	if (prev == 9)
		return ;
	i = prev;
	while (i <= 10 - g_lenght + n)
	{
		g_array[n] = '0' + i;
		rec(i, n + 1);
		i++;
	}
}

void	print_last(int i)
{
	char c;

	while (i <= 9)
	{
		c = '0' + i++;// i transformed to char plus 1
		write(1, &c, 1);
	}
}

void	ft_print_combn(int n)
{
	int i;

	i = 0;
	g_lenght = n;
	while (i < 10 - n)// 0 is smaller than 10 - length
	{
		g_array[0] = '0' + i;
		rec(i++, 1);
	}
	print_last(i);
}
