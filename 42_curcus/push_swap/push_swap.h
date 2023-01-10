/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:56:45 by oharoon           #+#    #+#             */
/*   Updated: 2023/01/10 19:08:56 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <limits.h>
# include "libft/libft.h"

typedef struct s_stack
{
	t_list	*a;
	t_list	*b;
}	t_stack;
int		check_input(int ac, char **arg);
t_list	*add_to_a(char *num);
int		ft_atoi_ps(const char *str);
int		dupicates(int ac, char **arg);
void	print_stack(t_list *stack);

#endif