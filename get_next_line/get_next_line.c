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
	char		inchar[BUFFER_SIZE + 1];
	char		*exit_str;
	static char	midchar[BUFFER_SIZE + 1];
	ssize_t		copied;

	exit_str = ft_strdup("");
	if (BUFFER_SIZE <= 0 || fd < 0 || read(fd, 0, 0) < 0)
		return (NULL);
	if (ft_strlen(midchar) > 1 && ft_strchr(midchar, 10) != NULL)
		return (ft_sep(midchar, &midchar, 0));
	else if (ft_strlen(midchar) > 1 && ft_strchr(midchar, 10) == NULL)
		exit_str = ft_strjoin(midchar, "");
	while ((copied = read(fd, inchar, BUFFER_SIZE)) > 0)
	{
		if (copied == -1)
			return (NULL);
		inchar[BUFFER_SIZE] = '\0';
		if (ft_strchr(inchar, 10) != NULL)
			return (exit_str = ft_strjoin(exit_str, ft_sep(inchar, &midchar,
						0)));
		exit_str = ft_strjoin(exit_str, inchar);
	}
	return (exit_str);
}

char	*ft_sep(const char *pre, char (*post)[BUFFER_SIZE + 1], ssize_t i)
{
	char	*out;
	ssize_t	e;
	char	mid[BUFFER_SIZE + 1];

	e = 0;
	out = ft_calloc(ft_strlen(pre) + 1, sizeof(char));
	if (!out)
		return (NULL);
	while (pre[i] != '\n' && pre[i])
	{
		out[i] = pre[i];
		i++;
	}
	out[i] = pre[i];
	while (pre[++i] != '\0')
	{
		mid[e] = pre[i];
		e++;
	}
	ft_bzero(*post, ft_strlen((*post)) + 1);
	e = -1;
	while (e++ <= (long)ft_strlen((*post)))
		(*post)[e] = mid[e];
	return (out);
}
