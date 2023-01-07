/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:23:45 by rbayoumi          #+#    #+#             */
/*   Updated: 2023/01/07 18:41:13 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sig_handler(int sig)
{
	static int bit;
	static int bit_message;
	int mask;

	mask = 0b10000000;

	if (sig == SIGUSR1)
		bit_message |= mask;
	mask >>= 1;
	if (mask == 0b00000001)
	{
		printf("%c", bit_message);
		mask = 0b10000000;
		bit_message = 0;
	}
}

int main(void)
{
	int pid;

	pid = getpid();
	printf("PID: %d\n", pid);
	while (1)
	{
		signal(SIGUSR1, sig_handler);
		signal(SIGUSR2, sig_handler);
		pause();
	}
	return (0);
}
