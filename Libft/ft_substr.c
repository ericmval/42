/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:01:30 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/24 16:05:38 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start,size_t len)
{
	size_t  count;
	char	*exit;
	int 	i;

	i = 0;
	count = ft_strlen(s);
	if (((size_t)start + len) >= count)
		return ("");
	s += start;
	exit = (char *) malloc(len +1);
	if (!exit)
		return (NULL);
	while (len-- )
	{
		exit[i] = s[i];
		i++;
	}
	exit[i] = '\0';
	return (exit);
}

int main (void)
{
	char test[11] = "";
	char *test2;
	test2 = (ft_substr(test,5,0));
	printf("%s\n",test2);
	return (0);
}

