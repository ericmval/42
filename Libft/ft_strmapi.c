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

#include "libft.h"
#include <stdlib.h>
//char to_upper_odd(unsigned int index, char c);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*exit;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	exit = (char *)malloc(len + 1);
	if (!exit)
		return (NULL);
	while (i < len)
	{
		exit[i] = f(i, s[i]);
		i++;
	}
	exit[len] = '\0';
	return (exit);
}
/*
char to_upper_odd(unsigned int index, char c)
{
    if (index % 2 != 0 && c >= 'a' && c <= 'z')
    {
        return c - 'a' + 'A';
    }
    return c;
}
int main()
{
    char const *original = "hola mundo aaaaaaaaaaaaaaaaaaa";
    char *modified;

    modified = ft_strmapi(original, to_upper_odd);
    if (modified)
    {
        printf("Original string: %s\n", original);
        printf("Modified string: %s\n", modified);
        free(modified);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/
/*
en:
receives a pointer to a char and creates a new char using
an external function, calling the external function does not do
The arguments need to be put, but they have to match the type of
argument
esp:
recibe un puntero a un char y crea un nuevo char  usando 
una funcion externa,al llamar a la funcion externa no hace
falta poner los argumentos, pero tienen que coincidir en el tipo de
argumento

*/