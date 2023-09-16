/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 21:34:26 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/14 21:37:13 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
    char    *sal;

    c = (char)c;
    sal = (char*)s;  

    if (s[0] == '\0')
        return (sal);
    while (*sal != '\0')
    {
        if (*sal == c)
            return (sal);
        sal++;
    }
return (NULL);
}

/*
int main (void)
{
    char test[8] = "potatoe";
    int busc = 't';

    printf("la salida original de %s es :%s\n",test,strchr(test,busc));
    printf("la salida  de %s es :%s",test,ft_strchr(test,busc));
    printf("la varible original es:%s",test);

}
*/