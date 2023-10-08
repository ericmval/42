/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:00:24 by emartin2          #+#    #+#             */
/*   Updated: 2023/10/08 12:19:45 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_print_string(char *src, int *cont)
{
	size_t	i;
	
	i = 0;
	while (i < ft_strlen(src))
	{
		ft_printer(src[i],cont);
		i++;
	}
}

