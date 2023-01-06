/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:18:59 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/10/26 13:06:40 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(int n)
{
	int	cntr;

	cntr = 0;
	if (n < 0)
		cntr++;
	while (n != 0)
	{
		n = n / 10;
		++cntr;
	}
	return (cntr);
}
char	*ft_itoa(int n)
{
	char	*str;
	int		digits_len;

	digits_len = digit_count(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(digits_len * sizeof(char) + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	str[digits_len--] = '\0';
	while (n != 0)
	{
		str[digits_len--] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
