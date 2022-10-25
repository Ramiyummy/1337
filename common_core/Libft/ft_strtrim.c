/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:17:31 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/10/25 15:18:45 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	skip_set(const char c, char const *set)
{
	int	i;

	i = 0;
	while (*(set + i) != '\0')
	{
		if (c == *(set + i))
			return (-1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;

	if (!s1)
		return (NULL);
	i = 0;
	len = ft_strlen(s1) - 1;
	while (s1[i] && skip_set(s1[i], set))
		i++;
	while (s1[len] && skip_set(s1[len], set))
		len--;
	if (len == -1)
		return (ft_substr(s1, i, 0));
	return (ft_substr(s1, i, (len - i + 1)));
}
