/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:41:30 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/03/30 18:45:06 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	char	c;
	int		is_uppercase;

	is_uppercase = 1;
	while (str != 0 && *str != '\0')
	{
		c = *str;
		if (!(c >= 'A' && c <= 'Z'))
		{
			is_uppercase = 0;
			break ;
		}
		++str;
	}
	return (is_uppercase);
}
