/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:16:11 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/11/05 18:17:12 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_add(unsigned long int num)
{
	int		printed;
	char	*arr;

	arr = "0123456789abcdef";
	printed = 0;
	if (num <= 15)
	{
		printed = ft_char(arr[num]);
	}
	else
	{
		printed = ft_add(num / 16);
		printed += ft_add(num % 16);
	}
	return (printed);
}
