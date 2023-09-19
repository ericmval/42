/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:17:17 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/19 19:17:54 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memcpy(void *dest, const void * src, size_t n)
{
    size_t  i;
    unsigned char *mid;
    unsigned char *ent;

    mid = (unsigned char*)dest;
    ent = (unsigned char*)src;


    i = 0;
    while (i < n )
    {
        mid[i] = ent[i];
        i++;
    }
    return (dest);
}
/*
int main (void)
{
    char dest[100];
    char src[3] ={0,0};
    ft_memcpy(dest, src, 2);
	int i = 0;
	for (; i < 100 && dest[i] == 0; ++i)
    
    return (0);
}
*/