/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:07:18 by emartin2          #+#    #+#             */
/*   Updated: 2023/10/01 09:07:18 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"
//void	to_upper_odd(unsigned int index, char *c);

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void to_upper_odd(unsigned int index, char *c)
{
    if (index % 2 != 0 && *c >= 'a' && *c <= 'z')
    {
        *c = *c - 'a' + 'A';
    }
}

int main()
{
    char original[] = "hola mundo aaaaaaaaaaaaaaaaaaa";
    
	printf("Original string: %s\n", original);
    ft_striteri(original, to_upper_odd);
	printf("Modificado string: %s\n", original);
    return 0;
}
*/
/*
en:
receives a char and measures it using an external function,
When calling the external function it is not necessary to put
the arguments, but they have to match the type of
argument
esp:
recibe un char y lo midifica  usando una funcion externa,
al llamar a la funcion externa no hace falta poner 
los argumentos, pero tienen que coincidir en el tipo de
argumento
*/