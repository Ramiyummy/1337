/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:40:54 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/10/25 23:27:37 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words_num(const char *str, char sep)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		if (str[i])
		{
			while (str[i] != sep)
				i++;
			num += 1;
		}
	}
	return (num);
}

static int	words_len(const char *str, int  index, char sep)
{
	int	cntr;

	cntr = 0;
	while (str[index] && str[index] != sep)
	{
		index++;
		cntr++;
	}
	return (cntr);
}

char **ft_split(char const *str, char c)
{
	int	i;
	int	j;
	int	k;
	char **split;

	i = 0;
	j = 0;
	split = (char **)malloc((words_num(str, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (str[i])
	{
		k = 0;
		while (str[i] == c)
			i++;
		if (str[i])
		{
			split[j] = (char *)malloc((words_len(str, i, c) + 1) * sizeof(char));
			if (!split[j])
				return (NULL);
			while (str[i] && str[i] != c)
			{
				split[j][k] = str[i];
				i++;
				k++;
			}
			split[j][k] = '\0';
			j++;
		}
	}
	split[j] = NULL;
	return (split);
}
