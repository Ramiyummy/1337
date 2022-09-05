/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:34:52 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/03/30 18:39:54 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	char	c;
	int		is_lowercase;

	is_lowercase = 1;
	while (str != 0 && *str != '\0')
	{
		c = *str;
		if (!(c >= 'a' && c <= 'z'))
		{
			is_lowercase = 0;
			break ;
		}
		++str;
	}
	return (is_lowercase);
}
