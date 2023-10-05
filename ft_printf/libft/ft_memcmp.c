/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:20:28 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/23 11:35:01 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*si1;
	unsigned char	*si2;

	i = 1;
	si1 = (unsigned char *)s1;
	si2 = (unsigned char *)s2;
	while (i <= n)
	{
		if (*si1 != *si2)
			return (*si1 - *si2);
		i++;
		si1++;
		si2++;
	}
	return (0);
}
/*
int main (void)
{
    char test1[7] = "patato";
    char test2[7] = "patato";
    int cont = 6;

    printf("la exit original es: %d\n",memcmp(test1,test2,cont));
    printf("la exit  mia     es: %d\n",ft_memcmp(test1,test2,cont));
}
*/
/*
en:
compares 2 memory addresses, passes them to unsigned char
  if they are equal it returns 0 and if they are different it returns
   the difference between the 2 mismatched chars.
esp:
compara 2 direcciones de memoria,los pasa a unsigned char
 si son iguales returna 0 y si son diferentes retorna
  la diferencia entre los 2 char que no coinciden.
*/
