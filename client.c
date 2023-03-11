/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:01:57 by muhcelik          #+#    #+#             */
/*   Updated: 2023/03/11 17:42:12 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_sign_signal(int pid, char *str)
{
	unsigned char	c;
	int				i;
	int				j;
	int				bit;

	i = 0;
	while (str[i])
	{
		c = str[i];
		j = 7;
		while (j >= 0)
		{
			bit = (c >> j) & 1;
			if (bit)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(100);
			j--;
		}
		i++;
	}
	newliner(pid);
}

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		ft_printf("You entered incorrectly, you need to enter three arguments");
		return (0);
	}
	ft_sign_signal(ft_atoi(av[1]), av[2]);
	return (0);
}