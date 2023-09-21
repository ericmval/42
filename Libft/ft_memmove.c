/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 02:30:39 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/20 02:30:49 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;
    size_t  i;
    
    d = (unsigned char *)dest;
    s = (const unsigned char *) src;

    if (d == s)
        return (dest);
    if (s < d && d < s + n)
    {
        i = n;
        while ( i > 0)
        {
            d[i - 1] = s[i -1];
            i--;
        }
    }
    else
    {
        i = 0;
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dest);
    }
/*   
int main (void)
{
    char inicio[5] = "casa";
    char destino[7] = "pelota";
    ft_memmove(destino,inicio, 5);
    return (0);
}
*/