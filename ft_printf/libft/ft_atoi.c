/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 23:24:00 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/23 09:32:22 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static unsigned char	*ft_position(const char *c, int *sign);
static int				numerice(unsigned char *digi);

static unsigned char	*ft_position(const char *c, int *sign)
{
	while (*c != '\0')
	{
		if (*c == ' ' || *c == '\n' || *c == '\v' || *c == '-'
			|| *c == '\r' || *c == '\t' || *c == '\f' || *c == '+')
		{
			if (*sign != 0)
				return (NULL);
			if (*c == '+')
				*sign = 1;
			if (*c == '-')
				*sign = -1;
			c++;
		}
		else if (*c < '0' || *c > '9')
			return (NULL);
		else if (*c >= '0' && *c <= '9')
			return ((unsigned char *) c);
	}
	return (NULL);
}

int	ft_atoi(const char *nptr)
{
	int				sign;
	unsigned char	*exit;
	int				numexit;

	sign = 0;
	exit = ft_position(nptr, &sign);
	if (exit)
	{
		numexit = numerice(exit);
		if (sign < 0)
			numexit *= -1;
		return (numexit);
	}
	else
		return (0);
}

static int	numerice( unsigned char *digi)
{
	int	mult;
	int	exit;
	int	i;
	int	suma;

	exit = 0;
	mult = 1;
	i = 0;
	suma = 0;
	while (digi[i] != '\0' && digi[i] >= '0' && digi[i] <= '9')
	{
		i++;
	}
	while (i > 0)
	{
		exit = digi[i - 1] - '0';
		suma = suma + (exit * mult);
		i--;
		mult = mult * 10;
	}
	return (suma);
}
/*
en:
converts a char string to an int variable
esp:
convierte una cadena char en una variable tipo int
*/