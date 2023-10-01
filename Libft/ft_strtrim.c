/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 23:47:48 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/26 02:19:12 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(s1 + end + 1));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	str = (char *)malloc(end - start + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], end - start + 2);
	return (str);
}
/*
en:
deletes the beginning and end of (s1) characters
that match any of the characters in (set)
until it finds one that is not in (set) then it stops.
Returns a new string with the result.
esp:
borra del principio y del final de (s1) los caracteres
que coincidan con cualquiera de los caracteres de (set)
hasta que halla uno que no esté en (set) entonces para.
Retorna una nueva cadena con el resultado.
*/