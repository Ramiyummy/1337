/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 07:51:59 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/11/22 16:42:34 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
	int		i;
	int		j;
	char	*baby;

	i = 0;
	j = 0;
	baby = (char *)malloc((ft_strlen(mother) + ft_strlen(father)) * sizeof(char) + 1);
	if (!baby)
		return (NULL);
	while (father && father[i])
	{
		baby[i] = father[i];
		i++;
	}
	while (mother[j])
	{
		baby[i++] = mother[j++];
	}
	return (baby);
}

char	*get_dline(char *f_draft)
{
	if (!f_draft)
		return (NULL);
	int		i;
	char	*dline;

	i = 0;
	dline = "";
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
/*
char	*final_draft(char *smt)
{
	char	*cleaned;

	return (cleaned);
}
*/
