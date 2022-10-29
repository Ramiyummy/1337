/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:40:54 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/10/29 12:22:53 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_num(const char *str, char sep)
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
			while (str[i] && str[i] != sep)
				i++;
			num += 1;
		}
	}
	return (num);
}

static int	word_len(const char *str, int index, char sep)
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

char	**ft_split(char const *str, char c)
{
	int		w_num;
	int		w_lenght;
	int		i;
	int		j;
	char	**split;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	w_num = word_num(str, c);
	split = (char **)malloc((w_num + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (j < w_num)
	{
		while (str[i] == c)
			i++;
		w_lenght = word_len(str, i, c);
		split[j] = ft_substr(str, i, w_lenght);
		i += w_lenght;
		j++;
	}
	split[j] = NULL;
	return (split);
}
