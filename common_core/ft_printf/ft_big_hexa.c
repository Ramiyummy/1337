/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:30:13 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/11/05 18:17:53 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_big_hexa(unsigned int num)
{
	int		printed;
	char	*arr;

	printed = 0;
	arr = "0123456789ABCDEF";
	if (num <= 15)
	{
		printed = ft_char(arr[num]);
	}
	else
	{
		printed = ft_big_hexa(num / 16);
		printed += ft_big_hexa(num % 16);
	}
	return (printed);
}
