/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:05:23 by muhcelik          #+#    #+#             */
/*   Updated: 2023/03/11 16:17:37 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int ft_atoi(char *str)
{
	int i;
	int	res;

	i = 0;
	res = 0;
	while (str[i])
	{
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	return (res);
}

void	newliner(int pid)
{
	kill(pid, SIGUSR2);
	usleep(100);
	kill(pid, SIGUSR2);
	usleep(100);
	kill(pid, SIGUSR2);
	usleep(100);
	kill(pid, SIGUSR2);
	usleep(100);
	kill(pid, SIGUSR1);
	usleep(100);
	kill(pid, SIGUSR2);
	usleep(100);
	kill(pid, SIGUSR1);
	usleep(100);
	kill(pid, SIGUSR2);
	usleep(100);
}