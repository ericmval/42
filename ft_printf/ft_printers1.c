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

/*int	ft_printNULL(int *cont)
{
	int out;

	out = write(1, "(null)", 6);
	*cont += 6;
	return (out);
}
*/
int	ft_print_string(char *src, int *cont)
{
	size_t	i;
	int out;
	i = 0;

	if (!src)
	{
		out = write(1, "(null)", 6);
		*cont += 6;
		return (out);
	}
	while (i < ft_strlen(src) && src != (void *)0)
	{
		out = ft_printer(src[i], cont);
		if (out < 0)
			return (out);
		i++;
	}
	return (0);
}

int	ft_putnbr(int n, int *cont)
{
	int			out;
	long int	i;

	i = (long int)n;
	if (i < 0)
	{
		out = ft_printer('-', cont);
		if (out == -1)
			return (out);
		i = -i;
	}
	if (i > 9)
	{
		out = ft_putnbr(i / 10, cont);
		if (out == -1)
			return (out);
		i %= 10;
	}
	out = ft_printer(i + '0', cont);
	//	if (out == -1)
	//		return (out);
	return (out);
}

int	ft_unsigned_putnbr(unsigned int n, int *cont)
{
	int out;

	if (n > 9)
	{
		out = ft_unsigned_putnbr(n / 10, cont);
		if (out == -1)
			return (out);
		n %= 10;
	}
	out = ft_printer(n + '0', cont);
	return (out);
//	if (out == -1)
//			return (out);
	
}
