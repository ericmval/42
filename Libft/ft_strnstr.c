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
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int compare(const char *big, const char *little, size_t *i, size_t len);

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    int s;

    i = 0;
    if (*little == '\0')
        return ((char *)big);

    while (*big && i < len)
    {
        if (*big == *little)
        {
            s = compare(big, little, &i, len);
            if (s)
                return ((char *)big);
        }
        big++;
        i++;
    }
    return (NULL);
}



int compare(const char *big, const char *little, size_t *i, size_t len)
{
    size_t local_i = 0;
    while (*little != '\0' && (*i + local_i) < len)
    {
        if (*big != *little)
            return (0);
        big++;
        little++;
        local_i++;
    }
    if (*little != '\0')
        return (0);
    return (1);
}
/*
int main(void)
{
    char test1[1] = "";
    char test2[3] = "xx";
    size_t cont = 4294967295;
    // printf("la original retorna :%s\n", strnstr(test1, test2, cont));
    printf("la original retorna :%s\n", ft_strnstr(test1, test2, cont));
}
*/
