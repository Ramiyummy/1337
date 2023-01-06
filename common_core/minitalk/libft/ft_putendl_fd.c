

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:42:59 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/10/26 19:55:14 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
