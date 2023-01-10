/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:56:44 by oharoon           #+#    #+#             */
/*   Updated: 2023/01/10 19:11:43 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list **stack)
{
	t_list	*temp;

	temp = stack;
	while (temp != NULL)
	{
		ft_printf("%i ", temp->value);
		temp = temp->next;
	}
}
