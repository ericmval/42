/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 22:22:33 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/23 10:03:15 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stddef.h>
#include <stdio.h>

static size_t	count(const char *str);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (count(src));
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (count(src));
}

static size_t	count(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*
int main(void)
{
    char inicio[8] = "camello";
    char final[8] = "pato";
    ft_strlcpy(final, inicio, 8);
    printf("final es: %s\n", final);

    char inicio2[8] = "camello";
    char final2[8] = "pato";
    strlcpy(final2, inicio2, 8);
    printf("final es: %s\n", final2);

    return 0;
}
*/
/*
en:
It is used to safely copy a string. booking
the last slot for /0.
In string you have to put the size of the destination buffer.
You can know the size by doing a siceoff or when it is declared
the variable, if a smaller number is set there is a risk of overflow
esp:
se usa para copiar una cadena de manera segura. reserva
el ultimo hueco para /0.
en string hay que colocar el tamaño del bufer de destino.
se puede saber el tamaño haciendo un siceoff o cuando se declara
la variable, si se pone un numero menor existe riesdo de desbordamiento
*/