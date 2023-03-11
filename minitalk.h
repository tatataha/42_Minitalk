/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:20:14 by muhcelik          #+#    #+#             */
/*   Updated: 2023/03/11 17:38:26 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <unistd.h>
# include "./ft_printf/ft_printf.h"

void	ft_welcome_signal(int signal);
void	ft_sign_signal(int pid, char *str);
void	newliner(int pid);
int     ft_atoi(char *str);

#endif