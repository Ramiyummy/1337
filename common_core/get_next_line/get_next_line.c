/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:26:58 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/11/22 17:21:16 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*first_draft(int fd, char *f_draft)
{
	int		nr;
	char	buffer[BUFFER_SIZE + 1];

	nr = 1;
	while (!ft_strchr(f_draft, '\n') && nr > 0)
	{
		nr = read(fd, buffer, BUFFER_SIZE);
		if (nr <= 0)
		{
			return (f_draft);
		}
		buffer[nr] = '\0';
	    f_draft = ft_strjoin(f_draft, buffer);
		printf("%s", f_draft);
	}
	return (f_draft);
}

char	*get_next_line(int fd)
{
	//char			*dline;
	char static		*f_draft;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	f_draft = first_draft(fd, f_draft);
	//dline = get_dline(f_draft);
	printf("%s\n", f_draft);
	//f_draft = final_draft(f_draft);
	return (f_draft);
}

int main(void)
{
	int fd;
	char	*buffer;

	fd = open("rami.txt", O_RDONLY);

	buffer = get_next_line(fd);
	printf("%s", buffer);

	return (0);
}
