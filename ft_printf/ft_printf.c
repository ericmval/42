/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:50:39 by emartin2          #+#    #+#             */
/*   Updated: 2023/10/07 13:33:30 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
//#include <stdarg.h>
#include "ft_printf.h"

// int ft_typesel (const char *text, int *i, va_list args,int *cont);
// void ft_printer(int a, int *cont);

int	ft_printf(const char *text, ...)
{
	va_list	args;
	int		cont;
	size_t	i;
	int		out;

	i = 0;
	cont = 0;
	va_start(args, text);
	while (text[i])
	{
		if (text[i] == '%')
		{
			i++;
			out =ft_typesel(text, &i, args, &cont);
		}
		else
		{
			out =ft_printer(text[i], &cont);
			i++;
		}
		if (out < 0)
			return(-1);
	}
	va_end(args);
	return (cont);
}

int	ft_printer(char a, int *cont)
{
	int error;

	error = write(1, &a, 1);

	(*cont)++;
	return (error);
}

int	ft_typesel(const char *text, size_t *i, va_list args, int *cont)
{
	int out;

	out = 0;
	if (text[*i] == '%')
		out = ft_printer(text[*i], cont);
	else if (text[*i] == 'c')
		out = ft_printer(va_arg(args, int), cont);
	else if (text[*i] == 's')
		out = ft_print_string(va_arg(args, char *), cont);
	else if (text[*i] == 'd' || text[*i] == 'i')
		out = ft_putnbr(va_arg(args, int), cont);
	else if (text[*i] == 'u')
		out = ft_unsigned_putnbr(va_arg(args, unsigned long int), cont);
	else if (text[*i] == 'p')
		out = ft_print_ptr((unsigned long int)va_arg(args, void *), cont, 1);
	else if (text[*i] == 'x')
		out = ft_print_hex_low(va_arg(args,unsigned int), cont, 1);
	else if (text[*i] == 'X')
		out = ft_print_hex_up(va_arg(args, unsigned int), cont, 1);
	else
		return (-1);
	if (out < 0)
		return (-1);
	(*i)++;
	return (0);
}
/*
int main (void)
{
	int		original;
	int		ft;
	char	test1;

	test1 = 'T';
	ft = ft_printf("%c %% bienes \n", test1);
	original = printf("%c %% bienes \n", test1);
	printf("el original es:%d\n", original);
	printf("el ft es:%d\n", ft);
	return (0);
}
*/
