/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 08:17:56 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/10/28 16:24:18 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	temp;
	char	*sub;

	i = 0;
	temp = 0;
	if (!s)
		return (NULL);
	if (len >= ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	sub = (char *)malloc(len * sizeof(char) + 1);
	if (!sub)
		return (NULL);
	while (*(s + start) != '\0' && i++ < len)
	{
		*(sub + temp) = *(s + start);
		start++;
		temp++;
	}
	*(sub + temp) = '\0';
	return (sub);
}
