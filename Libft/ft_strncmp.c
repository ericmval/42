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

    printf("salida original :%d \n",strncmp(test1,test2,comp));
    printf("salida     mia  :%d \n",ft_strncmp(test1,test2,comp));
}
*/
