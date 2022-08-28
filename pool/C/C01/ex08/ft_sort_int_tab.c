/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 22:53:29 by rbayoumi          #+#    #+#             */
/*   Updated: 2022/03/28 08:31:50 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = i + 1;
	while (i < size)
	{
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
				j++;
			}
			else
				j++;
		}
		i++;
		j = i + 1;
	}
}
