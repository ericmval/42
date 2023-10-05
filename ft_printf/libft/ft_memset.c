/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:07:59 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/23 10:27:19 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*mid;

	i = 0;
	mid = (unsigned char *)s;
	if (n == 0)
		return (mid);
	if (c >= 256)
		c = c % 256;
	while (i < n)
	{
		mid[i] = c;
		i++;
	}
	return (mid);
}
/*
en:
esp:
  fill the first (n) bytes of the pointed memory area
   by (s) with the constant byte value c.
   the comparison of c >= 256 and later %256 is done for
   that is compatible with signed char and therefore with ascii
   extended
esp:
 llenar los primeros (n) bytes del área de memoria apuntada
  por (s) con el valor de byte constante c.
  la comparacion de c >= 256 y posterior %256 se hace para 
  que sea compatible con insigned char y por tanto con ascii
  extendido
  */
