/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 09:51:30 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/23 09:56:37 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 1;
	while ((*s1 || *s2) && i <= n)
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		i++;
	}
	return (0);
}

/*
int main (void)
{
    char test1[20] = "test\200";
    char test2[20] = "test\0";
    int comp = 6;

    printf("exit original :%d \n",strncmp(test1,test2,comp));
    printf("exit     mia  :%d \n",ft_strncmp(test1,test2,comp));
}
*/
/*
en:
compares a string of characters up to position (n) if it is different 
it returns the subtraction between the 2 different characters and 
if the string up to (n) is equal it returns 0
esp:
compara una cadena de carcteres hasta la posicion (n) si es diferente
devuelve la resta entre los 2 caracteres diferentes y si la cadena
hasta (n) es igual devuleve 0
*/