/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:31:49 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/23 10:06:36 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
/*
int main (void)
{
    char test1[20] = "patato";
    char test2[20] = "patata";

    printf("exit original :%d \n",strcmp(test1,test2));
    printf("exit     mia  :%d \n",ft_strcmp(test1,test2));
}
*/
/*
en:
compare 2 string if there is any difference subtract the character
ascii of s1 -s2 in which you find the difference.
esp:
compara 2 string si hay alguna diferencia resta el caracter
ascii de s1 -s2 en el que encuentra la diferencia.
*/