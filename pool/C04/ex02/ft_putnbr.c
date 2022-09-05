/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:36:42 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/04/05 21:41:55 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	pos_neg(int x)
{
	if (x < 0)
	{
		ft_putchar('-');
		x *= -1;
	}
	return (x);
}

void	ft_putnbr(int nb)
{
	unsigned int	x;

	x = pos_neg(nb);
	if (x < 10)
	{
		ft_putchar(x + '0');
		return ;
	}
	ft_putnbr(x / 10);
	ft_putchar(x % 10 + '0');
}
