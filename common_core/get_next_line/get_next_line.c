/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 08:32:12 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/11/23 17:31:20 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*first_draft(int fd, char *first_d)
{
	int		nr;
	char	buffer[BUFFER_SIZE + 1];

	nr = 1;
	while (!ft_strchr(first_d, '\n') && nr > 0)
	{
		nr = read(fd, buffer, BUFFER_SIZE);
		if (nr <= 0)
			return (first_d);
		buffer[nr] = '\0';
		first_d = ft_strjoin(first_d, buffer);
	}
	return (first_d);
}

char	*get_next_line(int fd)
{
	char			*dline;
	char static		*first_d;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	first_d = first_draft(fd, first_d);
	dline = get_dline(first_d);
	first_d = final_draft(first_d);
	return (dline);
}

int	main(void)
{
	int	fd, i;

	i = 0;
	fd = open("rami.txt", O_RDONLY);
	while (i < 5)
	{
		printf("%s", get_next_line(fd));
		i++;
	}
	return 0;
}
