/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:47:23 by muhcelik          #+#    #+#             */
/*   Updated: 2023/03/11 17:43:02 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_welcome_signal(int signal)
{
	static int	bit = 7;
	static int	set = 0;

	if (signal == SIGUSR1)
		set += (1 << bit);
	else
		set += (0 << bit);
	if (bit == 0)
	{
		ft_printf("%c", set);
		bit = 7;
		set = 0;
	}
	else
		bit--;
}

int	main(void)
{
	int	pid;

	pid = getpid();
	ft_printf("pid: %d\n", pid);
	signal(SIGUSR1, ft_welcome_signal);
	signal(SIGUSR2, ft_welcome_signal);
	while (1)
		pause();
	return (0);
}