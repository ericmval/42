/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:10:13 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/16 15:10:19 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *str, int c, size_t n)
{
    size_t  i;
    i =1;
    char *med;
    med = (char*)str;
    while (i <= n)
    {
        if (*med == c)
            return (med);
        med++;
        i++;
    }
    return (NULL);

}

/*
int main (void)
{
    char    test1[8] = "\n";
    int     test2[5] = {32,111,500,1600,3};
    char    busc = 't';
    int     busc2 = 32;
    int     n = 2;

    printf("la original  da: %s\n",memchr(test1,busc,n));
    printf("la original  da: %p\n",memchr(&test2,busc2,n));
    printf("test1 ahora es :%s\n",test1);
    printf("la   mia     da: %s\n",ft_memchr(test1,busc,n));
    printf("la   mia    da: %p\n",ft_memchr(&test2,busc2,n));
    printf("test2 ahora es :%s\n",test1);
}
*/