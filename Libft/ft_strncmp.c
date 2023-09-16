/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:46:31 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/16 14:47:04 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 1;
    while ((*s1 || *s2) &&  i <= n )
    {
        if (*s1 != *s2)
            return (*s1 - *s2);
        s1++;
        s2++;
        i++;
    }
    return (0);

}


int main (void)
{
    char test1[20] = "patato";
    char test2[20] = "patata";
    int comp = 10;

    printf("salida original :%d \n",strncmp(test1,test2,comp));
    printf("salida     mia  :%d \n",ft_strncmp(test1,test2,comp));
}
