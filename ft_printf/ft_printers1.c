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

void ft_print_string(char *src, int *cont)
{
	size_t	i;
	
	i = 0;
	while (i < ft_strlen(src) && src != (void *)0 )
	{
		ft_printer(src[i],cont);
		i++;
	}
}

void	ft_putnbr(int n, int *cont)
{
	long int	i;
	i = (long int) n;  // Convertir el entero a long int para manejar números grandes

	if (i < 0)
	{
		ft_printer('-', cont);
		i = -i;
	}
	if (i > 9)
	{
		ft_putnbr(i / 10, cont);  // Llamada recursiva
		i %= 10;
	}
	ft_printer(i + '0', cont);  // Convertir el dígito a su representación de carácter
}

