/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 22:22:33 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/20 23:15:26 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t count(const char* str);

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	i = 0;

	if (count(src) > count(dst))
		while(i < count(dst) -1 && i < size)
		{
			dst[i] = src[i];
			i++;
		}
	else
	{
		while ( i < size)
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (count(src));
}

size_t count(const char* str)
{
	size_t i;
	i =0;
	while(*str)
	{
		str++;
		i++;
	}
	return (i);
}
/*
int main (void)
{
	char inicio[5] = "casa";
	char final[5] = "pato";
	ft_strlcpy(final,inicio,5);
	printf("final es:%s\n",final);
	return(0);
}
*/
