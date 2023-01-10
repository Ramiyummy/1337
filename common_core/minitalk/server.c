/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:23:45 by rbayoumi          #+#    #+#             */
/*   Updated: 2023/01/10 14:58:53 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sig_handler(int sig)
{
	static int	bit;
	static int	message;

	if (sig == SIGUSR1)
		message |= (0b1 << bit);
	bit++;
	if (bit == 8)
	{
		ft_char(message);
		bit = 0;
		message = 0;
	}
}

int	main(void)
{
	int	pid;

	pid = getpid();
	ft_str("PID: ");
	ft_nbr(pid);
	ft_str("\nYou are the love of my heart, ");
	ft_str("the one my heart desires, I will not mind waiting for you...\n");
	while (1)
	{
		signal(SIGUSR1, sig_handler);
		signal(SIGUSR2, sig_handler);
		pause();
	}
	return (0);
}
