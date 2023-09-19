/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:10:13 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/17 10:13:41 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	*med;

	i = 1;
	s
	if (c > 256)
		c = c % 256;
	med = (char *) str;
	while (i <= n)
	{
		if (*med == c)
			return (med);
		med++;
		i++;
	}
	return (NULL);
}

/*
int main (void)
{
    char    test1[14] = "paralelogramo";
   int     test2[7] = {0,1,2,3,4,5};
 //   char    busc = 't';
 //   int     busc2 = 32;

    int     n = 3;

    printf("la original  da: %p\n",memchr(test1,2 + 256 ,n));
    printf("la original  da: %p\n",memchr(&test2,2 + 256,n));
      printf("test1 ahora es :%s\n",test1);

    printf("la   mia     da: %p\n",ft_memchr(test1,2 + 256,n));
    printf("la   mia    da: %p\n",ft_memchr(&test2,2+256,n));
    printf("test2 ahora es :%s\n",test1);

}
*/