/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_little_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:11:47 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/11/05 18:17:35 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_little_hexa(unsigned int num)
{
	int		printed;
	char	*arr;

	printed = 0;
	arr = "0123456789abcdef";
	if (num <= 15)
	{
		printed = ft_char(arr[num]);
	}
	else
	{
		printed = ft_little_hexa(num / 16);
		printed += ft_little_hexa(num % 16);
	}
	return (printed);
}
