/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:01:30 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/25 16:50:27 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	char	*exit;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	count = ft_strlen(s);
	if (start >= count  )
		len = 0;
	if (len >= count - start) 
		len = count - start ;
	exit = (char *) malloc(len + 1);
	if (!exit)
		return (NULL);
	while (i < len && (start + i) < count)
	{
		exit[i] = s[start + i];
		i++;
	}
	exit[i] = '\0';
	return (exit);
}
/*
int main (void)
{
	ft_substr("hola",2,3);
	return (0);
}
*/