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
	char		inchar[BUFFER_SIZE+1];
	char		*exit_str = "test\n";
	int			last;
	ssize_t			copied;

	last = 0;
	if (BUFFER_SIZE <= 0 || fd < 0 || read(fd, 0, 0) < 0 || last)
		return (NULL);
	while ( (copied = read(fd, inchar, BUFFER_SIZE)) == BUFFER_SIZE &&
			ft_strchr(inchar, 10) )
	{
		if (copied == -1)
			return (NULL);
		exit_str = 
		if (ft_strchr())
		printf("%s  %zd  ",inchar, copied);
	}
	return (exit_str);
}
