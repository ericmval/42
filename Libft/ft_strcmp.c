/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:31:49 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/16 13:31:52 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int ft_strcmp(const char *s1, const char *s2)
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

    printf("salida original :%d \n",strcmp(test1,test2));
    printf("salida     mia  :%d \n",ft_strcmp(test1,test2));
}
*/