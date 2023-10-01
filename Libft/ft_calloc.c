/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:23:09 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/23 15:45:51 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			ent;
	unsigned char	*b;

	ent = nmemb * size;
	b = (unsigned char *) malloc(ent);
	if (!b)
		return (NULL);
	ft_bzero(b, ent);
	return ((void *) b);
}
/*

int main() {
    int *arr;
    arr = (int*) ft_calloc(5 ,sizeof(int));
    int i = 0;

    if (arr == NULL) {
        return 1;
    }

    while (i < 5) {
        arr[i] = i;
        i++;
    }
    i = 0;
	while (i < 5)
    {
	    printf("%d\n",arr[i]);
        i++;
    }
    free(arr);

    return 0;
}
*/
/*
en:
reserve memory space for a block
nmemb: is the number of spaces you want to reserve
size: it is the size that fits each hole, you can find out
       doing a sizeoff(variable type)
It is important to do free() when we no longer need the space
esp:
reserva espacio de memoria para un blooque
nmemb: es la cantidad de huecos que quieres reservar
size : es el tamaño que cupa cada hueco, se puede averiguar
      haciendo un sizeoff(tipo de variable)
Es importante hacer free() cuando ya no necesitemos el espacio
*/
