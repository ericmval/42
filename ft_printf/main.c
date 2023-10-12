/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 23:27:17 by emartin2          #+#    #+#             */
/*   Updated: 2023/10/10 23:27:33 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char *str = NULL;
	int		original;
	int		ft;
	ft =  ft_printf("bDVA)%pP#%%5z9\f%x]W\r%%%%ve%sJV3\nm(s^k}%u?E\tfd=0m\v %sKj&;\r ", (void *)8872523668784669870, -660084377, "aY@KKzXoyf\\i\tcs4/+;y]8CRu\n@u:L;\t5%z*@Y{\"~P) s2UyC>Nri]jQ'd07nn3*bo!Uk:H*,B~\t;fg$.VP&O5*\f;$x3", 1107453095, "\fn7xeKkvyKnxHFnMWz2r3\"}O@>4aK]NoJ@<2Njt{\rl1>7P8lG\f\f(/%c\nk.Zry=U\f@w^cOW-u~k((y:[\v{f+z8FD");
	printf("\nel ft es:%d\n", ft);
	original =  printf("bDVA)%pP#%%5z9\f%x]W\r%%%%ve%sJV3\nm(s^k}%u?E\tfd=0m\v %sKj&;\r ", (void *)8872523668784669870, -660084377, "aY@KKzXoyf\\i\tcs4/+;y]8CRu\n@u:L;\t5%z*@Y{\"~P) s2UyC>Nri]jQ'd07nn3*bo!Uk:H*,B~\t;fg$.VP&O5*\f;$x3", 1107453095, "\fn7xeKkvyKnxHFnMWz2r3\"}O@>4aK]NoJ@<2Njt{\rl1>7P8lG\f\f(/%c\nk.Zry=U\f@w^cOW-u~k((y:[\v{f+z8FD");
	printf("\nel original es:%d\n",original);
	
	return (0);
}
