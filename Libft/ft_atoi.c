/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 23:24:00 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/21 23:28:19 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int	is_negative(char *str)
{
	int	negative;
	int	i;

	i = 0;
	negative = 0;
	while (str[i] != '\0' && (str[i] < '0' || str[i] > '9'))
	{
		if (str[i] == '-')
			negative++;
		i++;
	}
	if (negative % 2 == 1)
		return (1);
	else
		return (0);
}

int	numerice(char *digi)
{
	int	mult;
	int	salida;
	int	i;
	int	suma;

	salida = 0;
	mult = 1;
	i = 0;
	suma = 0;
	while (digi[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		salida = digi[i - 1] - '0';
		suma = suma + (salida * mult);
		i--;
		mult = mult * 10;
	}
	return (suma);
}

int	ft_position(char *str, int *s, int signo )
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
		{
			signo = 1;
			i++;
		}
		else if (str[i] == ' ' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\r' || str[i] == '\t' || str[i] == '\f')
		{
			if (signo == 1)
				return (1);
			i++;
		}
		else if (str[i] < '0' || str[i] > '9')
			return (1);
		else if (str[i] >= '0' && str[i] <= '9')
			break ;
	}
	*s = i;
	return (0);
}

void	intechange(char *str, char *exit, int i)
{
	int	i2;

	i2 = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		exit[i2] = str[i];
		i++;
		i2++;
	}
	exit[i2] = '\0';
}

int	ft_atoi(char *str)
{
	char	str2[20];
	int		salida;
	int		i;

	i = 0;
	salida = 0;
	ft_position(str, &i, 0);
	intechange(str, str2, i);
	salida = numerice(str2);
	if (ft_position(str, &i, 0) == 1)
		salida = 0;
	if (is_negative(str))
		salida = -salida;
	return (salida);
}
/*
int	main(void)
{
	char	entrada[] ="--++43-^859";
	printf("el char es : %s \n", entrada);
	printf("el entero es %d \n", ft_atoi(entrada));
	return(0);
}
*/

