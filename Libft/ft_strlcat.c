/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 22:42:04 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/21 22:42:24 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
size_t	contador(const char *a);

size_t	contador(const char *a)
{
	size_t	cont;

	cont = 0;
	while (a[cont] != '\0')
		cont++;
	return (cont);
}
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ini;
	size_t	ini2;
	size_t	salida;

	salida = contador(dst)+contador(src);
	if (dstsize < contador(dst))
		salida = contador(src) + dstsize;
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
	return (salida);
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
		printf ("la salida mia es: %lu \n",ft_strlcat(test3,test1,mio));
		printf ("test 1 es : %s \ntest 2 es : %s \n",test1,test3);
    	printf ("la salida origunal es: %lu \n",strlcat(test2,test4,mio));
    	printf ("test 1 es : %s \ntest 2 es : %s \n\n\n\n\n\n",test4,test2);
		mio++;
	}
    return (0);
}
*/
