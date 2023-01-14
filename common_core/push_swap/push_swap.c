/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:37:28 by rbayoumi          #+#    #+#             */
/*   Updated: 2023/01/14 09:52:27 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// The goal is to sort in ascending order numbers into stack a. To do so you have 11 operations at your disposal.

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	ft_printf("Enter the values of stack a: \n");
	//if (duplice == True || non_integer == True || out_of_range == True)
	if (argv[1][i] == 9)
		ft_putstr_fd ("ERROR", 2);


	// first get the numbers from argv, and store em
	// then worry about how to do it
	ft_printf("Push Swap\n");
	if (argc > 1)
	{
	}
	return (0);
}
