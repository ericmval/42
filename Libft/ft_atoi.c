/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 23:24:00 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/22 22:31:24 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

unsigned char	*ft_position(const char *c, int *signo);
int		ft_atoi(const char *nptr);
int		numerice(unsigned char *digi);

unsigned char	*ft_position(const char *c, int *signo)
{
	while (*c != '\0')
	{
		if (*c == ' ' || *c == '\n' || *c == '\v' || *c == '-'
			|| *c == '\r' || *c == '\t' || *c == '\f' || *c == '+')
		{
			if (*signo != 0)
				return (NULL);
			if (*c == '+')
				*signo = 1;
			if (*c == '-')
				*signo = -1;
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
	int		signo;
	unsigned char	*salida;
	int		numexit;

	signo = 0;
	salida = ft_position(nptr, &signo);
	if (salida)
	{
		numexit = numerice(salida);
		if (signo < 0)
			numexit *= -1;
		return (numexit);
	}
	else
		return (0);
}

int	numerice( unsigned char *digi)
{
	int	mult;
	int	salida;
	int	i;
	int	suma;

	salida = 0;
	mult = 1;
	i = 0;
	suma = 0;
	while (digi[i] != '\0' && digi[i] >= '0' && digi[i] <= '9')
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
