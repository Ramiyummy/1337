/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:54:36 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/10/21 18:05:57 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	s_len;

	s_len = ft_strlen(s);
	i = 0;
	while (s_len >= i)
	{
		if (*(s + s_len) == (char)c)
		{
			return ((char *)(s + s_len));
		}
		s_len--;
		if ((char)c == '\0')
		{
			return ((char *)(s + s_len));
		}
	}
	return (0);
}
