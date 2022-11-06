/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:29:37 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/11/05 18:18:30 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbr(int n)
{
	unsigned int	nb;
	int				printed;

	nb = n;
	printed = 0;
	if (n < 0)
	{
		printed += ft_char('-');
		nb *= -1;
	}
	if (nb < 10)
	{
		printed += ft_char(nb + '0');
	}
	else
	{
		printed += ft_nbr(nb / 10);
		printed += ft_nbr(nb % 10);
	}
	return (printed);
}
