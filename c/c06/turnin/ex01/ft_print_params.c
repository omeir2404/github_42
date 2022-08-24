/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:25:24 by oharoon           #+#    #+#             */
/*   Updated: 2022/08/21 15:26:17 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;
	int	i;

	if (argc > 0)
	{
		a = 1;
		while (a < argc)
		{
			i = 0;
			while (argv[a][i] != '\0')
			{
				write(1, &argv[a][i], 1);
				i++;
			}
			a++;
			write(1, "\n", 1);
		}
	}
}
