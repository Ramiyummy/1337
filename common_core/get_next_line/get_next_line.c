/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:26:58 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/11/16 12:34:02 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#define BUFFER_SIZE 20

char	*get_leftover(int fd, char *leftover)
{
	int		nr;
	char	*buffer;

	buffer = (ft_calloc(BUFFER_SIZE, sizeof(char) + 1));
	if (!buffer)
		return (NULL);
	while ( !ft_strchr(leftover, '\n') && nr > 0)
	{
		nr = read(fd, buffer, BUFFER_SIZE);
		if (nr <= 0)
		{
			free(buffer);
			return (leftover);
		}
		//leftover = ft_strjoin(leftover, buffer);

		// read
		// check if nr less or equal to 0
		// if yeah free buffer, and return leftover
		// leftovr join with with leftover and buffer,
		// free it
		// return leftover
	}
	free(buffer);
	return (leftover);
}
char	*get_next_line(int fd)
{
	char			dline;
	char static		*leftover;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
//	leftover = get_leftover(fd, leftover);
//	line = get_dline(fd, line);
//	leftover = clean_leftover(fd, leftover);
//	return (dline);
}
