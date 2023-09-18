/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:25:09 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/18 15:47:22 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

 char *ft_strnstr(const char *big,	const char *little, size_t len)
 {
    size_t i;
    int b;
    int comp;
    char *salida;
    comp = 0;
    i = 0;
    b = 0;
    while (big++ && i++ <= len)
    {
        if (*big == little[b])
        {
            salida = (char*)big;  
            comp = 1;
            while (little[b])
            {
                if (*big != little[b])
                {
                    comp = 0;
                    break ;
                }
                big++;
                b++;
            }
            big = big - b;
            b= 0;
            if (comp)
                return (salida);
        }
    }
    return(NULL);
 }
/*
int main (void)
{
    char test1[22] = "hola ladilla ladradora";
    char test2[5] = "ladr";
    size_t  cont = 23;
    printf("la original retorna :%s\n",strnstr(test1,test2,cont));
    printf("la original retorna :%s\n",ft_strnstr(test1,test2,cont));
}
*/
