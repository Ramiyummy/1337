/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:51:37 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/10/19 11:08:56 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char temp[n];

	i = 0;
	if(dest == NULL && src == NULL)
	{
		return (NULL);
	}
	while (i < n)
	{
		temp[i] = *(unsigned char *) (src + i);
		i++;
	}
	while (i < n)
	{
		*(unsigned char *) (dest + i) = temp[i];
		i++;
	}
	return (dest);
}
