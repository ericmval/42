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

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_typesel(const char *text, size_t *i, va_list args, int *cont);
int	ft_printer(char a, int *cont);
int		ft_printf(const char *text, ...);
size_t	ft_strlen(const char *s);
int     ft_print_string(char *src, int *cont);
int 	ft_putnbr(int n, int *cont);
int	ft_print_ptr(unsigned long int num, int *cont, int first);
int 	ft_print_hex_low(unsigned int num, int *cont, int first);
int	ft_print_hex_up(unsigned int num, int *cont, int first);
int	ft_unsigned_putnbr(unsigned int n, int *cont);
//int     ft_printNULL(int *cont);

#endif
