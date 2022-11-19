/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 03:09:35 by oharoon           #+#    #+#             */
/*   Updated: 2022/11/19 05:34:57 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	char			*buff;
	static char		*line[FD_SIZE];
	char			*t;
	ssize_t			n;

	if (BUFFER_SIZE < 1 || fd < 0)
		return (NULL);
	buff = malloc(BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	n = read(fd, buff, BUFFER_SIZE);
	while (n > 0)
	{
		buff[n] = '\0';
		if (!line[fd])
			line[fd] = ft_strdup("");
		t = ft_strjoin(line[fd], buff);
		free(line[fd]);
		line[fd] = t;
		if (ft_check_next_line(line[fd]) == 1)
			break ;
		if (n < 0)
		{
			free(buff);
			return (NULL);
		}
		n = read(fd, buff, BUFFER_SIZE);
	}
	return (line[fd]);
}
