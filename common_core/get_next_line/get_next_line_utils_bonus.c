/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:40:16 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/11/24 15:52:33 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
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
	return (NULL);
}

char	*ft_strjoin(char *father, char *mother)
{
	int		x;
	int		y;
	char	*baby;

	if (!father)
	{
		father = (char *)malloc(1 * sizeof(char));
		father[0] = '\0';
	}
	baby = (char *)malloc(ft_strlen(father) + ft_strlen(mother) + 1);
	if (!baby)
		return (NULL);
	x = 0;
	y = 0;
	while (father && father[x])
	{
		baby[x] = father[x];
		x++;
	}
	while (mother[y])
		baby[x++] = mother[y++];
	baby[ft_strlen(father) + ft_strlen(mother)] = '\0';
	free(father);
	return (baby);
}

char	*get_dline(char *first_d)
{
	int		i;
	char	*dline;

	if (!first_d)
		return (NULL);
	i = 0;
	while (first_d[i] && first_d[i] != '\n')
		i++;
	dline = malloc(i + 2);
	if (!dline)
		return (NULL);
	i = 0;
	while (first_d[i] && first_d[i] != '\n')
	{
		dline[i] = first_d[i];
		i++;
	}
	if (first_d[i] == '\n')
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
	if (!first_d)
		return (NULL);
	while (first_d[i] && first_d[i] != '\n')
		i++;
	if (!first_d[i] || (first_d[i] == '\n' && first_d[i + 1] == '\0'))
	{
		free(first_d);
		return (NULL);
	}
	final_d = malloc((ft_strlen(first_d) - i) * sizeof(char));
	if (!final_d)
		return (NULL);
	i++;
	j = 0;
	while (first_d[i])
		final_d[j++] = first_d[i++];
	final_d[j] = '\0';
	free(first_d);
	return (final_d);
}
