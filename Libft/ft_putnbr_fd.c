/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:50:01 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/29 22:08:05 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static void	ft_write(char a, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	int	i;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			ft_write('-', fd);
			i = -n;
		}
		else
		{
			i = n;
		}
		if (i > 9)
		{
			ft_putnbr_fd(i / 10, fd);
			i %= 10;
		}
		ft_write(i + '0', fd);
	}
}

static void	ft_write(char a, int fd)
{
	write(fd, &a, 1);
}
/*
en:
Send the number 'n' to the given file descriptor
esp:
Envía el número ’n’ al file descriptor dado
*/