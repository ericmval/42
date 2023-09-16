/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:45:51 by emartin2          #+#    #+#             */
/*   Updated: 2023/08/17 15:59:00 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	imprimir_valores(int it1, int it2)
{
	char	pos1;
	char	pos2;
	char	pos3;
	char	pos4;

	pos1 = it1 / 10 + '0';
	pos2 = it1 % 10 + '0';
	pos3 = it2 / 10 + '0';
	pos4 = it2 % 10 + '0';
	write (1, &pos1, 1);
	write (1, &pos2, 1);
	write (1, " ", 1);
	write (1, &pos3, 1);
	write (1, &pos4, 1);
	if (it1 < it2 && (it1 != 98 || it2 != 99))
		write (1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	it1;
	int	it2;

	it1 = 0;
	while (it1 <= 99)
	{
		it2 = it1 + 1;
		while (it2 <= 99)
		{
			if (it1 < it2)
				imprimir_valores(it1, it2);
			it2++;
		}
		it1++;
	}
}
/*
int main(void)
{
	ft_print_comb2();
	return (0);
}
*/
