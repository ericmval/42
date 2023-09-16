/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 08:15:23 by emartin2          #+#    #+#             */
/*   Updated: 2023/08/17 13:33:03 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	descomp(int numero, int pos)
{
	int		reves[10];
	int		ini;
	char	x;

	ini = pos;
	while (numero != 0)
	{
		reves[pos -1] = numero % 10;
		numero = numero / 10;
		pos--;
	}
	while (pos < ini)
	{
		x = reves[pos] + '0';
		write (1, &x, 1);
		pos++;
	}
}

int	maxarr(int numero)
{
	int	cont;

	if (numero < 0)
		numero = -numero;
	cont = 0;
	while (numero > 1)
	{
		if (numero == 10)
			cont++;
		cont++;
		numero = numero / 10;
	}
	return (cont);
}

void	ft_putnbr(int nb)
{
	int	len_array;

	if (nb == 0)
		write (1, "0", 1);
	else if (nb == -2147483648)
		write (1, "i-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			write (1, "-", 1);
		}
		len_array = maxarr(nb);
		descomp(nb, len_array);
	}
}
/*
int main (void)
{
	ft_putnbr(-10);
	return(0);
}
*/
