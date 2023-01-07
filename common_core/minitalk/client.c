/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 07:16:48 by rbayoumi          #+#    #+#             */
/*   Updated: 2023/01/07 18:31:32 by rbayoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void send_bit(int pid, char c)
{
	int i;
	int mask;

	mask = 0b10000000;
	i = 0;
	while ( i <= 7)
	{
		if (c & mask)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		i++;
		mask >>= 1;
	}
}

int main(int argc, char **argv)
{
	int	pid;
	int	i;

	i = 0;
	if (argc == 3)
	{
		pid = atoi(argv[1]);
		while(argv[2][i] != '\0')
		{
			send_bit(pid, argv[2][i]);
			i++;
		}
		send_bit(pid, '\n');
	}
	else
	{
		printf("Wrong format! Please enter a correct format!\n");
		printf("Example: ./client 1337 \"Future Is Loading\"\n");
		return (1);
	}
	return (0);
}
