/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 20:07:51 by emartin2          #+#    #+#             */
/*   Updated: 2023/10/13 20:07:55 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*buffer;
//	char		*exit_str;
	int			last;
	ssize_t			copied;

	last = 0;
	if (BUFFER_SIZE <= 0 || fd < 0 || read(fd, 0, 0) < 0 || last)
		return (NULL);
	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	copied = read(fd, buffer, BUFFER_SIZE);
  return ((char *)buffer);
}
