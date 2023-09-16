/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:59:31 by emartin2          #+#    #+#             */
/*   Updated: 2023/08/10 19:37:43 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	inicial;
	char	final;

	inicial = '0';
	final = '9';
	while (inicial <= final)
	{
		write(1, &inicial, 1);
		inicial += 1;
	}
}
