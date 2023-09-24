/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 21:34:26 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/23 10:18:34 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*exit;

	c = (char) c;
	exit = (char *) s;
	while (*exit != '\0')
	{
		if (*exit == c)
			return (exit);
		exit++;
	}
	if (c == '\0')
		return (exit);
	return (NULL);
}
/*
int main (void)
{
    char test[8] = "pato";
    int busc = '\0';

    printf("la exit original de %s es :%s\n",test,strchr(test,busc));
    printf("la exit  de %s es :%s\n",test,ft_strchr(test,busc));
    printf("la varible original es:%s",test);

}
*/
