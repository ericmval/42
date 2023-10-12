/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:00:24 by emartin2          #+#    #+#             */
/*   Updated: 2023/10/08 12:19:45 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printNULL(int *cont)
{
	write(1, "(null)", 6);
	*cont += 6;
}

void	ft_print_string(char *src, int *cont)
{
	size_t	i;

	if (!src)
	{
		ft_printNULL(cont);
		return ;
	}
	i = 0;
	while (i < ft_strlen(src) && src != (void *)0)
	{
		ft_printer(src[i], cont);
		i++;
	}
}

void	ft_putnbr(int n, int *cont)
{
	long int	i;

	i = (long int)n;
	if (i < 0)
	{
		ft_printer('-', cont);
		i = -i;
	}
	if (i > 9)
	{
		ft_putnbr(i / 10, cont);
		i %= 10;
	}
	ft_printer(i + '0', cont);
}

void	ft_unsigned_putnbr(unsigned int n, int *cont)
{
	if (n > 9)
	{
		ft_unsigned_putnbr(n / 10, cont);
		n %= 10;
	}
	ft_printer(n + '0', cont);
}
