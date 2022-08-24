/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:30:01 by oharoon           #+#    #+#             */
/*   Updated: 2022/08/23 19:06:05 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN_MSG "I have an even number of arguments.\n"
# define SUCCESS 0
typedef int	t_bool;
# define EVEN(nbr) (nbr % 2 == 0) ? 1 : 0
# define FALSE 0
# define TRUE 1
# define ODD_MSG "I have an odd number of arguments.\n"

#endif