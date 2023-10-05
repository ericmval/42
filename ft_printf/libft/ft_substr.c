/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:01:30 by emartin2          #+#    #+#             */
/*   Updated: 2023/10/01 09:09:00 by emartin2         ###   ########.fr       */
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
	if (start >= count)
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
/*
en:
It is used to extract in a string from the position (start) the
maximum number of characters of (len), if it ends (s) or the entry
is greater than the long of(s) to extract.
if start is greater than the size of (s) it is given the value of 0 for
When memory is reserved, 1 is saved as the original does and if
len es is greater than the size of (s)minus the input position
len becomes size of (s) minus start.
esp:
Se usa para extraer en un string  desde la posicion (start) la 
cantidad de caracteres maxima de(len), si termina (s) o la entrada
es mayor que el largo de (s) termina de extraer.
si start es mayor que el tamaño de (s) se le da el valor de 0 para 
cuando se reserve memoria se guarde 1 como hace el original y si 
len es es mayor que el tamaño de (s)menos la posicion de entrada
len pasa a ser tamaño de (s) menos start.
*/