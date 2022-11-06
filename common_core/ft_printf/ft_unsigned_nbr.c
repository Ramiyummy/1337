/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_nbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:34:12 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/11/05 18:18:48 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_nbr(unsigned int n)
{
	int	printed;

	printed = 0;
	if (n < 10)
	{
		printed += ft_char(n + '0');
	}
	else
	{
		printed += ft_unsigned_nbr(n / 10);
		printed += ft_unsigned_nbr(n % 10);
	}
	return (printed);
}
