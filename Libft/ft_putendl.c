/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:32:24 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/29 22:06:16 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;
	size_t	i;
	char	n;

	n = '\n';
	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, &n, 1);
}
/*
en:
Send the character 'c' to the file descriptor
specified.and a final line break
esp:
Envía el carácter ’c’ al file descriptor
especificado.y un salto de linea final
*/