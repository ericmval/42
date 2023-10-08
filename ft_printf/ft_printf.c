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
#include "libftprintf.h"

//int ft_typesel (const char *text, int *i, va_list args,int *cont);
//void ft_printer(int a, int *cont);

int ft_printf(const char *text, ...)
{
	va_list	args;
	int	cont;
	size_t i;

	i = 0;
	va_start(args, text);
	cont = 0;
	while (text[i])
	{
		if (text[i] == '%')
		{
			i++;
			ft_typesel(text, &i, args, &cont);
		}
		else
		{
			ft_printer(text[i], &cont);
			i++;
		}
	}
	va_end(args);
	return(cont);
}

void ft_printer(int a,int *cont)
{
	write(1, &a, 1);
	(*cont)++;
}

int ft_typesel (const char *text, size_t *i, va_list args,int *cont)
{
	if (text[*i] == '%')
		ft_printer(text[*i], cont);
	else if (text[*i] == 'c')
		ft_printer(va_arg(args, int), cont);
	else if (text[*i] == 's')
		ft_print_string(va_arg(args,char *),cont);
	else
		return (-1);
	(*i)++;
	return (0);
}
/*
int main (void)
{
	int original;
	int ft;
	char test1 = 'T';

	ft = ft_printf("%c %% bienes \n", test1);
	original = printf("%c %% bienes \n", test1);
	printf("el original es:%d\n", original);
	printf("el ft es:%d\n", ft);

	return (0);
}
*/

