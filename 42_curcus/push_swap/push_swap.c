/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 12:48:49 by oharoon           #+#    #+#             */
/*   Updated: 2023/01/07 14:28:09 by oharoon          ###   ########.fr       */
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

	count_args = 0;
	stack.a = NULL;
	stack.b = NULL;
	if (ac == 1)
		exit(0);
	if (check_input() == 1)
		while (count_args < ac)
			stack.a = add_to_a(av[count_args++]);
	printf("%i", stack.a->value);
	free (stack.a);
}
