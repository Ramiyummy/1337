/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 08:28:58 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/11/05 16:16:02 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

/* Function prototypes */

int		ft_str(char *s);
int		ft_char(char c);
int		ft_nbr(int n);
int		ft_unsigned_nbr(unsigned int n);
int		ft_printf(const char *format, ...);
int		ft_little_hexa(unsigned int num);
int		ft_big_hexa(unsigned int num);
int		ft_add(unsigned long int num);

#endif
