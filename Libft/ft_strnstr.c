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

 int compare(const char *big, const char *little);

 char *ft_strnstr(const char *big,	const char *little, size_t len)
 {
    size_t i;
    int s;
    
    i = 0;
    while (big && i <= len)
    {
        if (*big ==  *little)
        {
            s = compare(big, little);
            if (s)
                return ((char *)big);
        }
        big++;
        i++;
    }
    return(NULL);
 }

 int compare(const char *big, const char *little)
 {
    int comp;

    comp = 1;
    while (*little != '\0')
    {
        if (*big == *little)
            comp = 1;
        else
            return (0);
        big++;
        little++;
    }
    return (comp);
}
/*
int main (void)
{
    char test1[22] = "hola ladilla ladradora";
    char test2[5] = "ladr";
    size_t  cont = 23;
//    printf("la original retorna :%d\n",strnstr(test1,test2,cont));
    printf("la original retorna :%s\n",ft_strnstr(test1,test2,cont));
}
*/
