/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:17:55 by oharoon           #+#    #+#             */
/*   Updated: 2022/11/19 05:05:43 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buff[BUFFER_SIZE + 1];
	char		*line;

	if (BUFFER_SIZE < 1 || fd < 0)
		return (NULL);
	line = NULL;
	while (buff[0] || read(fd, buff, BUFFER_SIZE) > 0)
	{
		line = make_line(line, buff);
		if (ft_check_next_line(buff) == 1)
			break ;
		if (read(fd, buff, BUFFER_SIZE) < 0)
		{
			free(line);
			return (NULL);
		}
	}
	return (line);
}

/* int main()
{
	int fd;
	char *str;

	fd = open("test.txt", O_RDONLY);
	while(str == get_next_line(fd))
	{
		printf("%s", str);
		free(str);
	}
	close(fd);
} */
/* has to search for \n in "line", {LINE 32}
	breaks if it finds "\n", else return(1) */