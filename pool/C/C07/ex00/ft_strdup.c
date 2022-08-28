/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 20:06:52 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/04/11 21:20:22 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*new_string;
	int		i;

	i = 0;
	new_string = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!new_string)
		return (NULL);
	while (src[i])
	{
		new_string[i] = src[i];
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
