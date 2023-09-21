/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 22:22:33 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/21 22:09:38 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stddef.h>
#include <stdio.h>

size_t count(const char* str);

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i = 0;

    if (size == 0)
        return count(src);

    while (src[i] && i < size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';

    return count(src);
}

size_t count(const char* str)
{
    size_t i = 0;
    while (str[i])
    {
        i++;
    }
    return i;
}
/*
int main(void)
{
    char inicio[8] = "camello";
    char final[8] = "pato";
    ft_strlcpy(final, inicio, 8);
    printf("final es: %s\n", final);

    char inicio2[8] = "camello";
    char final2[8] = "pato";
    strlcpy(final2, inicio2, 8);
    printf("final es: %s\n", final2);

    return 0;
}
*/