/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:07:59 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/19 19:08:12 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memset(void *s, int c,size_t n)
{
    size_t i;
    i = 0;
    unsigned char *mid;
    mid = (unsigned char*)s;
    if (n == 0)
        return (mid);
    if (c >= 256)
        c = c % 256;
    while (i < n )
    {
        mid[i] = c;
        i++;
    }
    return (mid);
}
