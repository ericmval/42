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
	char	test[3] = "yo";
	int		original;
	int		ft;
	char	*test2 = test;


	ft =  ft_printf("soy %p\n",test2);
	original =  printf("soy %p\n",test2);
	printf("el original es:%d\n",original);
	printf("el ft es:%d\n", ft);
	return (0);
}
