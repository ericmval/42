/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 20:11:09 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/28 20:38:15 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main (void)
{
	ft_putchar_fd('e',1);
	return (0);
}
*/
/*
en:
Send the character 'c' to the file descriptor
specified.
esp:
Envía el carácter ’c’ al file descriptor
especificado.
*/