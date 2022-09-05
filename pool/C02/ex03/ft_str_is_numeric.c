/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:23:55 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/03/30 18:33:44 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	char	c;
	int		is_number;

	is_number = 1;
	while (str != 0 && *str != '\0')
	{
		c = *str;
		if (!(c >= '0' && c <= '9'))
		{
			is_number = 0;
			break ;
		}
		++str;
	}
	return (is_number);
}
