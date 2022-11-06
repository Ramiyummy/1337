/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:05:19 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/11/05 18:15:38 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_holders(va_list ptr, const char frmt)
{
	int	printed;

	printed = 0;
	if (frmt == 'c')
		printed += ft_char(va_arg(ptr, int));
	else if (frmt == 's')
		printed += ft_str(va_arg(ptr, char *));
	else if (frmt == 'd' || frmt == 'i')
		printed += ft_nbr(va_arg(ptr, int));
	else if (frmt == 'u')
		printed += ft_unsigned_nbr(va_arg(ptr, unsigned int));
	else if (frmt == '%')
		printed += ft_char(frmt);
	else if (frmt == 'x')
		printed += ft_little_hexa(va_arg(ptr, unsigned int));
	else if (frmt == 'X')
		printed += ft_big_hexa(va_arg(ptr, unsigned int));
	else if (frmt == 'p')
	{
		printed += ft_str("0x");
		printed += ft_add(va_arg(ptr, unsigned long int));
	}
	return (printed);
}

int	ft_printf(const char *format, ...)
{
	int		printed;
	va_list	format_ptr;

	printed = 0;
	va_start(format_ptr, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			printed += check_holders(format_ptr, *format);
		}
		else
			printed += ft_char(*format);
		format++;
	}
	va_end(format_ptr);
	return (printed);
}
