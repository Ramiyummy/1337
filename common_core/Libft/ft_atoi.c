/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:13:38 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/10/23 09:57:49 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	output;

	i = 0;
	sign = 1;
	output = 0;
	while (*(nptr + i) == 32 || (*(nptr + i) >= 9 && *(nptr + i) <= 13))
		i++;
	if (*(nptr + i)== '-' || *(nptr + i) == '+')
	{
		if (*(nptr + i)== '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(*(nptr + i)))
	{
		output = output * 10 + *(nptr + i) - '0';
		i++;
	}
	return (output * sign);
}
