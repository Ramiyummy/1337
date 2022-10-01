/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 15:58:01 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/04/03 22:09:33 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lenght_src;
	unsigned int	lenght_dest;

	i = 0;
	j = 0;
	lenght_src = ft_strlen(src);
	lenght_dest = ft_strlen(dest);
	j = lenght_dest;
	if (size == 0 || size <= lenght_dest)
		return (lenght_src + size);
	while (src[i] && i < size - lenght_dest - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (lenght_dest + lenght_src);
}
