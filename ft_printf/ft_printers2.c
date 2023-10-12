/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printers2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 23:21:33 by emartin2          #+#    #+#             */
/*   Updated: 2023/10/10 23:21:54 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_hex_digit_up(int digit, int *cont)
{
	int out;

	if (digit < 10)
		out = ft_printer(digit + '0', cont);
		
	else
		out = ft_printer(digit + 55, cont);
	return (out);
	
}

static int	print_hex_digit_low(int digit, int *cont)
{
	int out ;

	if (digit < 10)
	{
		out = ft_printer(digit + '0', cont);
		if (out == -1)
			return (out);
	}
	else
	{
		out = ft_printer(digit + 87, cont);
		if (out == -1)
			return (out);
	}
	return (out);
}

int	ft_print_hex_up(unsigned int num, int *cont, int first)
{
	int out;

	out = 0;
	if (first && num == 0)
		out = ft_printer('0', cont);
		if (out == -1)
			return (out);
	if (num == 0)
		return (out);
	out = ft_print_hex_up(num / 16, cont, 0);
	if (out == -1)
			return (out);
	out = print_hex_digit_up(num % 16, cont);
	if (out == -1)
			return (out);
	return (out);
}

int	ft_print_hex_low(unsigned int num, int *cont, int first)
{
	int out;

	out = 0;
	if (first && num == 0)
		out = ft_printer('0', cont);
		if (out == -1)
			return (out);
	if (num == 0)
		return (out);
	out = ft_print_hex_low(num / 16, cont, 0);
	if (out == -1)
			return (out);
	out = print_hex_digit_low(num % 16, cont);
	if (out == -1)
			return (out);
	return (out);

}
/*
void	ft_print_ptr(long long int num, int *cont)
{
	ft_printer('0', cont);
	ft_printer('x', cont);
//	if (!num)
//		ft_printer('0',cont);
	ft_print_hex_low(num, cont, 1);
}
*/
int	ft_print_ptr(unsigned long int num, int *cont, int first)
{
	int out;
	if (first)
	{
		out = ft_printer('0', cont);
		if (out == -1)
			return (out);
		out = ft_printer('x', cont);
		if (out == -1)
			return (out);

		if (num == 0)
			out = ft_printer('0', cont);
			if (out == -1)
				return (out);
	}
	if (num == 0)
		return (out);
	out = ft_print_ptr(num / 16, cont, 0);
	if (out == -1)
		return (out);
	out = print_hex_digit_low(num % 16, cont);
	return (out);
}
