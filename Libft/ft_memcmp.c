/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:20:28 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/16 17:20:35 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    i = 1;
    unsigned char *si1;
    unsigned char *si2;
    si1 = (unsigned char*)s1;
    si2 = (unsigned char*)s2;

    while (i <= n)
    {
        if (*si1 != *si2)
            return(*si1 - *si2);
        i++;
        si1++;
        si2++;
    }
    return(0);
}
/*
int main (void)
{
    char test1[7] = "patato";
    char test2[7] = "patato";
    int cont = 6;

    printf("la salida original es: %d\n",memcmp(test1,test2,cont));
    printf("la salida  mia     es: %d\n",ft_memcmp(test1,test2,cont));
}
*/