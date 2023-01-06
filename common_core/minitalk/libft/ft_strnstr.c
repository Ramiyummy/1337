/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:05:08 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/10/23 07:55:12 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (*(big + i) != '\0' && i < len)
	{
		j = 0;
		while (*(little + j) == *(big +i + j) && (i + j) < len)
		{
			if (*(little + j + 1) == '\0')
				return ((char *)(big + i));
			else
				j++;
		}
		i++;
	}
	return (NULL);
}
