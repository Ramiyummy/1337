/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 08:32:12 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/11/24 15:33:33 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>



char *handle_read_error(int nr, char *first_d, char *buffer)
{
	if (nr < 0)
	{
		free(first_d);
		free(buffer);
		return (NULL);
	}
	free(buffer);
	return (first_d);
}

char	*first_draft(int fd, char *first_d)
{
	int		nr;
	char	*buffer;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	nr = 1;
	while (!ft_strchr(first_d, '\n') && nr > 0)
	{
		nr = read(fd, buffer, BUFFER_SIZE);
		if (nr <= 0)
			return (handle_read_error(nr, first_d, buffer));
		buffer[nr] = '\0';
		first_d = ft_strjoin(first_d, buffer);
	}
	free(buffer);
	return (first_d);
}

char	*get_next_line(int fd)
{
	char			*dline;
	static char		*first_d;

	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		return (NULL);
	}
	first_d = first_draft(fd, first_d);
	dline = get_dline(first_d);
	first_d = final_draft(first_d);
	return (dline);
}
