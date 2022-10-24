/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:28:42 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/10/24 10:39:16 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *father, char const *mother)
{
	char	*baby;
	size_t	i;
	size_t	mother_len;
	size_t	father_len;

	i = 0;
	mother_len = ft_strlen(mother);
	father_len = ft_strlen(father);
	if (!father || !mother)
		return (NULL);
	baby = (char *)malloc((mother_len + father_len) * (sizeof(char)) + 1);
	if (baby == NULL)
		return (NULL);
	ft_memmove(baby, father, father_len);
	ft_memmove(baby + father_len, mother, mother_len);
	*(baby + father_len + mother_len) = '\0';
	return (baby);
}
