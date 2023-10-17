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
	char		*exit_str;
	static char		midchar[BUFFER_SIZE+1];
	ssize_t		copied;

	exit_str = ft_strdup("");
	if (BUFFER_SIZE <= 0 || fd < 0 || read(fd, 0, 0) < 0 )
		return (NULL);
	if (ft_strlen(midchar) > 1 && ft_strchr(midchar, 10) != NULL )
		return(exit_str = ft_strjoin(exit_str , ft_sep(inchar,&midchar)));
//		printf("viene de la ultima llamada y falta limpiarlo");
	else if (ft_strlen(midchar) >1 && ft_strchr(midchar ,10) == NULL)
//		return (midchar);
		exit_str = ft_strdup(midchar);
	while ((copied = read(fd, inchar, BUFFER_SIZE)) > 0 )
	{
		if (copied == -1)
			return (NULL);
		inchar[copied] = '\0'; 
		if (ft_strchr(inchar, 10) != NULL)
			return(exit_str = ft_strjoin(exit_str , ft_sep(inchar,&midchar)));
		exit_str = ft_strjoin(exit_str, inchar);
	}
	return (exit_str);
}
char *ft_sep(const char *pre,char (*post)[BUFFER_SIZE + 1])
{
	ssize_t i;
	char *out;
    char *originalout;

	i = 0;	
	while (pre[i] != '\n' && pre[i])
		i++;
	out = ft_calloc(i +1 ,sizeof(char));
	if(!out)
		return (NULL);
    originalout = out;
	while ( i-- +1 > 0)
	{
		*out = *pre;
		out++;
		pre++;
	}
	i = 0;
	ft_bzero((*post), BUFFER_SIZE +1);
	while (*pre)
	{
		(*post)[i] = *pre;
		i++;
		pre++;
	}
	return (originalout);
}