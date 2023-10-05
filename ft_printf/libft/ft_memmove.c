/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:04:17 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/23 11:23:14 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *) src;
	if (d == s)
		return (dest);
	if (s < d && d < s + n)
	{
		i = n;
		while (i-- > 0)
			d[i] = s[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
int main (void)
{
    char inicio[5] = "casa";
    char destino[7] = "pelota";
    ft_memmove(destino,inicio, 5);
    return (0);
}
*/
/*
en:
This function does a prior verification to avoid
overlapping memory spaces.
(s < d && d < s + n) can be compared because they are addresses
by memory.
The source pointer s is smaller than the destination pointer d, so
  which means that s is before d in memory.
The destination pointer d is less than s+n, which means
that d is within the range of memory to be copied from s.
If both conditions are true, then
there is an overlap in which the target area is
after the area of origin. In this case, the copy is made
  from back to front to avoid data overwriting
   that have not yet been copied.
esp:
Esta funcion hace una verificacion previa para evitar la
superposicion de espacios de memoria.
(s < d && d < s + n)  se  puede comparar porque son direcciones
de memoria.
El puntero de origen s es menor que el puntero de destino d, lo
 que significa que s está antes de d en la memoria.
El puntero de destino d es menor que s + n, lo que significa 
que d está dentro del rango de memoria que se va a copiar desde s.
Si ambas condiciones son verdaderas, entonces 
hay una superposición en la que el área de destino está 
después del área de origen. En este caso, la copia se realiza
 de atrás hacia adelante para evitar la sobreescritura de datos
  que aún no se han copiado.
*/