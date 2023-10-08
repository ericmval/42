/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 09:39:07 by emartin2          #+#    #+#             */
/*   Updated: 2023/10/08 09:39:15 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

int     ft_typesel (const char *text, size_t *i, va_list args,int *cont);
void    ft_printer(int a, int *cont);
int     ft_printf(const char *text, ...);
size_t	ft_strlen(const char *s);
void    ft_print_string(char *src, int *cont);
void	ft_putnbr(int n, int *cont);






#endif
