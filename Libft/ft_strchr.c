/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 21:34:26 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/17 13:52:32 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*sal;

	c = (char) c;
	sal = (char *) s;
/*	if (s[0] == '\0')
		return (NULL);
*/		
	while (*sal != '\0')
	{
		if (*sal == c)
			return (sal);
		sal++;
	}
	if (c == '\0')
		return (sal);
	return (NULL);
}
/*
int main (void)
{
    char test[8] = "pato";
    int busc = '\0';

    printf("la salida original de %s es :%s\n",test,strchr(test,busc));
    printf("la salida  de %s es :%s\n",test,ft_strchr(test,busc));
    printf("la varible original es:%s",test);

}
*/
