/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:48:03 by oharoon           #+#    #+#             */
/*   Updated: 2022/10/30 17:24:25 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int char_count(const char *s, char c)
{
    int equal;
    int stop;

    stop = 0;
    equal = 0;
    while (s[stop])
    {  
       if (s[stop] != c)
            equal++;
        stop++; 
    }
    return (equal);
}

char	**ft_split(char const *s, char c)
{
    
	return (0);
}

#include <stdio.h>
int main(void)
{
    char const *s = "jorge e corajoso";
    char c = ' ';
    //ft_split(s, c);
    printf("%i", char_count(s, c));
}