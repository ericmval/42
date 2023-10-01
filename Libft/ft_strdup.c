/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:49:09 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/24 11:33:52 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	count;
	char	*exit;

	i = 0;
	count = 0;
	while (s[i] != '\0')
		i++;
	exit = (char *)malloc(i + 1);
	if (!exit)
		return (NULL);
	while (count < i)
	{
		exit[count] = s[count];
		count++;
	}
	exit[count] = '\0';
	return (exit);
}
/*int main (void)
{
	char test[7] = "";
	char *test2 = "dwdw";

	test2 = ft_strdup(test);
	printf("%s\n",test2);
	return (0);
}
*/
/*
en:
This function dynamically allocates memory for the new string
using malloc and then copy the content of the original string
  in the new memory area. Finally, return a pointer
   to the new duplicate string.
esp:
Esta función asigna memoria dinámicamente para la nueva cadena 
usando malloc y luego copia el contenido de la cadena original
 en la nueva área de memoria. Finalmente, devuelve un puntero
  a la nueva cadena duplicada.
*/
