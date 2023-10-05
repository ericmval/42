/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:48:51 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/22 21:46:05 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*mid;
	int		i;

	i = 0;
	mid = (char *)s;
	if (c > 256)
		c %= 256;
	while (*mid != '\0')
	{
		i++;
		mid++;
	}
	if (c == '\0')
		return (mid);
	while (i >= 0)
	{
		if (*mid == c)
			return (mid);
		i--;
		mid--;
	}
	return (NULL);
}
/*
int main (void)
{
    char test[12] = "tripouille";
    int busc = 't' + 256;

    printf("la exit original de %s es :%s\n",test,strrchr(test,busc));
    printf("la exit  de %s es :%s\n",test,ft_strrchr(test,busc));
    printf("\nla varible original es:%s",test);
}
*/
/*
en:
used to find the first occurrence of a specific character
in a string. STARTING FROM BACK The function returns a pointer to the
first matching character in the string, or NULL if the character is not matched
found in the chain.
  ft_strchr does the same from front to back
esp:
se utiliza para buscar la primera ocurrencia de un carácter específico 
en una cadena.EMPEZANDO DESDE ATRAS La función devuelve un puntero al
primer carácter que coincide en la cadena,o NULL si el carácter no se
encuentra en la cadena. 
ft_strchr hace lo mismo de adelante hacia atras
*/