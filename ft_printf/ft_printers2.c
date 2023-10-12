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

static void	print_hex_digit_up(int digit, int *cont)
{
	if (digit < 10)
		ft_printer(digit + '0', cont);
	else
		ft_printer(digit + 55, cont);
}

static void	print_hex_digit_low(int digit, int *cont)
{
	if (digit < 10)
		ft_printer(digit + '0', cont);
	else
		ft_printer(digit + 87, cont);
}

void	ft_print_hex_up(unsigned int num, int *cont, int first)
{
	if (first && num == 0)
		ft_printer('0', cont);
	if (num == 0)
		return ;
	ft_print_hex_up(num / 16, cont, 0);
	print_hex_digit_up(num % 16, cont);
}

void	ft_print_hex_low(unsigned int num, int *cont, int first)
{
	if (first && num == 0)
		ft_printer('0', cont);
	if (num == 0)
		return ;
	ft_print_hex_low(num / 16, cont, 0);
	print_hex_digit_low(num % 16, cont);
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
void	ft_print_ptr(unsigned long int num, int *cont, int first)
{
	if (first)
	{
		ft_printer('0', cont);
		ft_printer('x', cont);
		if (num == 0)
			ft_printer('0', cont);
	}
	if (num == 0)
		return ;
	ft_print_ptr(num / 16, cont, 0);
	print_hex_digit_low(num % 16, cont);
}
