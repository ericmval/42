/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 22:42:04 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/23 10:16:01 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

static size_t	counter(const char *a);

static size_t	counter(const char *a)
{
	size_t	cont;

	cont = 0;
	while (a[cont] != '\0')
		cont++;
	return (cont);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ini;
	size_t	ini2;
	size_t	exit;

	exit = counter(dst)+counter(src);
	if (dstsize < counter(dst))
		exit = counter(src) + dstsize;
	ini2 = 0;
	ini = 0;
	while (dst[ini] != '\0' )
		ini++;
	while (src[ini2] != '\0' && ini < dstsize - 1)
	{
		if (dstsize == 0)
			break ;
		dst[ini] = src[ini2];
		ini++;
		ini2++;
	}
	dst[ini] = '\0';
	return (exit);
}
/*
int main (void)
{
	
	int mio = 0;
    char test3[100] = "ho";
	char test1[100] = "laboral";
    char test2[100] = "ho";
	char test4[100] = "laboral";
	while (mio < 35)
	{
		printf ("numero es : %d \n",mio);
		printf ("la exit mia es: %lu \n",ft_strlcat(test3,test1,sifeoff(test1)));
		printf ("test 1 es : %s \ntest 2 es : %s \n",test1,test3);
    	printf ("la exit origunal es: %lu \n",strlcat(test2,test4,mio));
    	printf ("test 1 es : %s \ntest 2 es : %s \n\n\n\n\n\n",test4,test2);
		mio++;
	}
    return (0);
}
*/
/*
en:
It is used to concatenate strings safely, avoids
stripping and always places /0 in the last dest slot.
function returns the variable exit, which is calculated at the beginning
of the function as counter(dst) + counter(src). This value
is the total size the string would have if the buffer
dst destination was large enough to contain both
dst and src strings, including the terminating NULL character.
If dstsize is less than counter(dst), then the value
returned is changed to counter(src) + dstsize.
This return value is generally used to check if the
concatenation was successful and if the buffer is large enough
large to contain the new string. If the returned value is
greater than or equal to the buffer size (dstsize), that means that
the concatenation operation was not completely successful and
part of the source string (src) was truncated.
esp:
Se utiliza para concatenar cadenas de manera segura ,evita el
desvordamiento y coloca /0 siempre en el ultimo hueco de dest.
función devuelve la variable exit, que es calculada al inicio
de la función como counter(dst) + counter(src). Este valor
es el tamaño total que tendría la cadena si el búfer de
destino dst fuera lo suficientemente grande para contener ambas 
cadenas dst y src, incluido el carácter NULL de terminación.
Si dstsize es menor que counter(dst), entonces el valor
devuelto se cambia a counter(src) + dstsize.
Este valor devuelto se utiliza generalmente para chequear si la 
concatenación fue exitosa y si el búfer es lo suficientemente 
grande para contener la nueva cadena. Si el valor devuelto es 
mayor o igual al tamaño del búfer (dstsize), eso significa que 
la operación de concatenación no fue completamente exitosa y 
parte de la cadena de origen (src) se truncó.




*/