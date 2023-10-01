/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:11:18 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/23 10:32:10 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*mid;

	i = 0;
	mid = (char *)s;
	while (i < n)
	{
		mid[i] = '\0';
		i++;
	}
}
/*
int main (void)
{
	char test[19] = "canalla";
	int i = 0;
	ft_bzero(test,5);
	while (i < 15)
	{
		printf("%c\n",test[i]);
		printf("%p\n", test);
		i++;
	}
	return (0);
}
*/
/*
en:
sets all bytes of a block of memory to /0.
You have to be careful with putting more holes than you need.
has the block.
s: is a pointer to the memory block you want to zero.
n: is the number of bytes you want to set to zero.
esp;
pone a /0 todos los bytes de un  bloque de memoria.
hay que tener cuidado con poner mas huecos de los que
tiene el bloque.
s: es un puntero al bloque de memoria que quieres poner a cero.
n: es el número de bytes que quieres poner a cero. 
*/