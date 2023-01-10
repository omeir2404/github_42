/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 12:48:49 by oharoon           #+#    #+#             */
/*   Updated: 2023/01/10 19:07:09 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*add_to_a(char *num)
{
	t_list	*node;

	node = lstnew_ps(ft_atoi(num));
	return (node);
}

int	main(int ac, char **av)
{
	t_stack	stack;
	int		count_args;

	count_args = 1;
	stack.a = NULL;
	stack.b = NULL;
	if (ac < 3)
		exit(0);
	count_args = 1;
	check_input(ac, av);
	stack.a = add_to_a(av[count_args++]);
	while (count_args < ac)
		ft_lstadd_back(&stack.a, add_to_a(av[count_args++]));
	print_stack(stack.a);
	free (stack.a);
}
