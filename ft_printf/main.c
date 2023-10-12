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
//	char *str = NULL;
	int		original;
	int		ft;
	ft =  ft_printf("%X", 0);
	printf("\nel ft es:%d\n", ft);
	original =  printf("%X", 0);
	printf("\nel original es:%d\n",original);
	
	return (0);
}
