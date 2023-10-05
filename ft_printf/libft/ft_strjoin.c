/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:22:57 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/25 20:02:32 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*exit;
	char	*o_exit;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	exit = (char *) malloc (len + 1);
	if (!exit)
		return (NULL);
	o_exit = exit;
	while (*s1)
	{
		*exit = *s1;
		exit++;
		s1++;
	}
	while (*s2)
	{
		*exit = *s2;
		exit++;
		s2++;
	}
	*exit = '\0';
	return (o_exit);
}
/*
int main (void)
{
//	char	test1[11] = "hola mundo";
//	char	*test2	 = "\0";
	char	*test3 ;
	
	test3 = ft_strjoin("mundo","dorado");
	printf("%s\n",test3);
	return (0);
}
*/
/*
en:
esp:
concatenate two strings into a new string,
allocating the memory necessary to store the
  result.If you cannot reserve memory either of
  the 2 entries in NULL return NULL
esp:
concatenar dos  cadenas en una nueva cadena, 
asignando la memoria necesaria para almacenar el
 resultado.Si no puede reservar memoria  cualquiera de 
 las 2 entradas en NULL retorna NULL
*/
