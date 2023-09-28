/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:50:01 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/28 21:52:50 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	*num;
	size_t	len;
	size_t	i;

	i = 0;
	num = ft_itoa(n);
	len = ft_strlen(num);
	while (i < len)
	{
		write(fd, &num[i], 1);
		i++;
	}
}

int	main(void)
{
	ft_putnbr_fd( 0, 1);
	return (0);
}

