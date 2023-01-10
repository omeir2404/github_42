/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:53:08 by oharoon           #+#    #+#             */
/*   Updated: 2023/01/10 18:45:12 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi_ps(const char *str)
{
	int			i;
	int			sign;
	long long	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	result *= sign;
	if (result > 2147483647 || result < -2147483648)
		return (-1);
	return (result);
}

int	not_int(char **arg)
{
	int	i;

	i = 1;
	while (arg[i])
	{
		if (!ft_atoi(arg[i]))
		{
			ft_printf("Error\n");
			ft_printf("atoi error");
			exit(0);
		}
		if (ft_atoi(arg[i]) == -1)
			break ;
		else if (ft_atoi_ps(arg[i]) == -1)
		{
			ft_printf("Error\n");
			ft_printf("not int error");
			exit(0);
		}
		i++;
	}
	return (1);
}

int	dupicates(int ac, char **arg)
{
	int	count;
	int	self;

	count = 2;
	self = 1;
	while (self < ac)
	{
		while (count < ac)
		{
			if (ft_atoi(arg[self]) == ft_atoi(arg[count]))
			{
				ft_printf("Error\n");
				ft_printf("found Duplicates");
				exit(0);
			}
			count++;
		}
		self++;
	}
	return (1);
}

int	check_alpha(int ac, char **arg)
{
	int	i;
	int	digit;

	i = 1;
	while (i < ac)
	{
		digit = 0;
		if (arg[i][0] == '+' || arg[i][0] == '-')
			digit++;
		while (arg[i][digit])
		{
			if (!(arg[i][digit] > 47 && arg[i][digit] < 58))
			{
				ft_printf("Error\n");
				ft_printf("found Alphabet");
				exit(0);
			}
			digit++;
		}
		i++;
	}
	return (1);
}

int	check_input(int ac, char **arg)
{
	check_alpha(ac, arg);
	not_int(arg);
	dupicates(ac, arg);
	return (1);
}
