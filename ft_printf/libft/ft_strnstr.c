/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:25:09 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/23 09:45:08 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>
#include <string.h>

static int	compare(const char *big, const char *little, size_t *i, size_t len);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		s;

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

static int	compare(const char *big, const char *little, size_t *i, size_t len)
{
	size_t	local_i;

	local_i = 0;
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
/*
en:
searches a character string (big) for a substring (little)
If it finds it, it returns the string from the place where
found the first match. If you don't find a match
returns NULL and if (little) is NULL returns the entire (big) string
esp:
busca en una cadena de carcteres (big) una subcadena (little)
si la encuentra devuelve la cadena a partir del lugar donde 
encontro la primera coincidencia. Si no encuentra coincidencia
returna NULL y si (little) es NULL retorna la cadena (big) completa
*/
