/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:26:50 by emartin2          #+#    #+#             */
/*   Updated: 2023/08/14 09:41:16 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	cen;
	int	dec;
	int	uni;

	cen = '0';
	while (cen <= '7')
	{
		dec = cen +1;
		while (dec <= '8')
		{
			uni = dec + 1;
			while (uni <= '9')
			{
				write(1, &cen, 1);
				write(1, &dec, 1);
				write(1, &uni, 1);
				if (cen != '7')
					write(1, ", ", 2);
				uni++;
			}
			dec++;
		}
		cen++;
	}
}
