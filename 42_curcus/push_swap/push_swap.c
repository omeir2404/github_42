/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeir <omeir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 12:48:49 by oharoon           #+#    #+#             */
/*   Updated: 2023/01/05 17:47:38 by omeir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	stack;
	int		count_args;

	count_args = 0;
	if (ac == 1)
		exit(0);
	printf("%c", av[1][0]);
	stack.a = NULL;
	stack.b = NULL;
	while (count_args <= ac)
	{
		add_to_a();
		count_args++;
	}
}
