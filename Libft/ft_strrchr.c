/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:48:51 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/16 12:48:54 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
    char    *mid;
    char    *exit;
    int     esta;

    esta = 0;
    mid = (char*)s;
    if (s[0] == '\0')
        return (mid);
    while (*mid++ != '\0')
    {
        if (*mid == c)
        {
            exit = mid;
            esta = 1;
        }
        
    }
    if (esta)
        return (exit);
    else
        return (NULL);
}
/*
int main (void)
{
    char test[8] = "potatoe";
    int busc = '\0';

    printf("la salida original de %s es :%s\n",test,strrchr(test,busc));
    printf("la salida  de %s es :%s",test,ft_strrchr(test,busc));
    printf("\nla varible original es:%s",test);
}
*/