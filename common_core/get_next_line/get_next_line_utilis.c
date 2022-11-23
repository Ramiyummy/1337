/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 08:31:36 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/11/23 17:30:28 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (*(s + i) != '\0')
	{
		if (*(s + i) == (char)c)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	if ((char)c == '\0')
	{
		return ((char *)(s + i));
	}
	return (0);
}

char	*ft_strjoin(char *father, char *mother)
{
	int		x;
	int		y;
	char	*baby;
	int		len;

	len = ((ft_strlen(mother) + ft_strlen(father)) * sizeof(char) + 1);
	x = 0;
	y = 0;
	baby = (char *)malloc(len);
	if (!baby)
		return (NULL);
	while (father && father[x])
	{
		baby[x] = father[x];
		x++;
	}
	while (mother[y])
	{
		baby[x++] = mother[y++];
	}
	free(father);
	return (baby);
}

char	*get_dline(char *f_draft)
{
	int		i;
	char	*dline;

	if (!f_draft)
		return (NULL);
	i = 0;
	while (f_draft[i] && f_draft[i] != '\n')
	{
		i++;
	}
	dline = malloc(i + 2);
	if (!dline)
		return (NULL);
	i = 0;
	while (f_draft[i] && f_draft[i] != '\n')
	{
		dline[i] = f_draft[i];
		i++;
	}
	if (f_draft[i] == '\n')
		dline[i++] = '\n';
	dline[i] = '\0';
	return (dline);
}

char	*final_draft(char *first_d)
{
	char	*final_d;
	int		i;
	int		j;

	i = 0;
	while (first_d[i] && first_d[i] != '\n')
		i++;
	if (!first_d[i])
	{
		free(first_d);
		return (NULL);
	}
	final_d = malloc((ft_strlen(first_d) - i + 1) * sizeof(char));
	i++;
	j = 0;
	while (first_d[i])
	{
		final_d[j] = first_d[i];
		j++;
		i++;
	}
	free(first_d);
	return (final_d);
}
