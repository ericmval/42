/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 00:28:09 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/28 10:37:01 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	len;
	char	*exit;
	int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	exit = (char *) malloc(len + 1);
	if (!exit)
		return (NULL);
	while (i < len)
	{
		exit[i] = f(i,s[i]);
		i++;
	}
	exit[len] = '\0';
	return (exit);
}
