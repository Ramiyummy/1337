/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:46:05 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/03/30 21:35:25 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	char	c;
	int		is_printable;

	is_printable = 1;
	while (str != 0 && *str != '\0')
	{
		c = *str;
		if (!(c >= 32 && c <= 126))
		{
			is_printable = 0;
			break ;
		}
		++str;
	}
	return (is_printable);
}
