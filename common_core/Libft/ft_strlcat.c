/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:05:13 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/10/20 18:42:32 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lenght_src;
	size_t	lenght_dst;

	i = 0;
	j = 0;
	if (size == 0)
	{
		return (-1);
	}
	lenght_src = ft_strlen(src);
	lenght_dst = ft_strlen(dst);
	j = lenght_dst;
	if (size == 0 || size <= lenght_dst)
		return (lenght_src + size);
	while (src[i] && i < size - lenght_dst - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (lenght_dst + lenght_src);
}
