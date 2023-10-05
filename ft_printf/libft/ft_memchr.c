/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:10:13 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/23 11:31:44 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*med;
	unsigned char	ce;

	i = 1;
	med = (unsigned char *) str;
	ce = (unsigned char) c;
	while (i <= n)
	{
		if (*med == ce)
			return (med);
		med++;
		i++;
	}
	return (NULL);
}

/*
int main (void)
{
    char    test1[14] = "paralelogramo";
   int     test2[7] = {0,1,2,3,4,5};
 //   char    busc = 't';
 //   int     busc2 = 32;

    int     n = 3;

    printf("la original  da: %p\n",memchr(test1,2 + 256 ,n));
    printf("la original  da: %p\n",memchr(&test2,2 + 256,n));
      printf("test1 ahora es :%s\n",test1);

    printf("la   mia     da: %p\n",ft_memchr(test1,2 + 256,n));
    printf("la   mia    da: %p\n",ft_memchr(&test2,2+256,n));
    printf("test2 ahora es :%s\n",test1);

}
*/
/*
en:
returns the memory address of the first match
from str with c, if there are no matches it returns NULL
esp:
devuelve la direccion de memoria de la primera coincidencia
de str con  c,si no hay coincidencias returna NULL
*/
