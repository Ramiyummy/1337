/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:26:58 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/11/18 11:54:23 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_leftover(int fd, char *leftover)
{
	int		nr;
	char	buffer[BUFFER_SIZE + 1];

	nr = 1;
	while (!ft_strchr(leftover, '\n') && nr > 0)
	{
		nr = read(fd, buffer, BUFFER_SIZE);
		if (nr <= 0)
		{
			return (leftover);
		}
		buffer[nr] = '\0';
	    leftover = ft_strjoin(leftover, buffer);
	}
	return (leftover);
}
char	*get_next_line(int fd)
{
	char			*dline;
	char static		*leftover;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	leftover = get_leftover(fd, leftover);
	dline = get_dline(leftover);
	printf("%s\n", leftover);
	//leftover = clean_leftover(leftover);
	return (dline);
}

int main(void)
{
	int fd, i;
	char	*buffer;

	fd = open("rami.txt", O_RDONLY);

	buffer = get_next_line(fd);
	i = 0;
	while (i < 2)
	{
	printf("%s", buffer);
	i++;
	}

	return (0);
}
