/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:52:58 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/18 18:10:36 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
/*
int main(void){
	
	printf("%zu\n",ft_strlen("paco"));
	printf("%luß\n",strlen("paco"));
	return (0);
}
*/
/*
en:
measure the size of the chain that we pass
esp:
mide el tamaño de la cadena que le pasamos
*/
