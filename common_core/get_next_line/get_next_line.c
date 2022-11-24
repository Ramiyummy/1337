/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 08:32:12 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/11/24 13:00:02 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

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
		{
			free(buffer);
			return (first_d);
		}
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
		return (NULL);
	first_d = first_draft(fd, first_d);
	dline = get_dline(first_d);
	first_d = final_draft(first_d);
	return (dline);
}
int main(void)
{
	int	fd;
	int	i;

	i = 0;
	fd = open("rami.txt", O_RDONLY);
	while (i < 6)
	{
		printf("%s", get_next_line(fd));
		i++;
	}
}
