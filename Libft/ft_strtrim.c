/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 23:47:48 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/26 02:19:12 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static void ft_pos(char const *s1, char const *set, size_t *f_i, size_t *r_i);
static int ft_inside(char const s1, char const *set);

char *ft_strtrim(char const *s1, char const *set)
{
	size_t *f_i;
	size_t *r_i;

	if (!s1 || !set)
		return (NULL);
	ft_pos(s1, set, f_i,r_i );
	return ("test");
}
static void ft_pos(char const *s1, char const *set, size_t *f_i, size_t *r_i)
{
	int	end_c;
	size_t	len;
	len = ft_strlen(s1);
	end_c = 0;

	while (*s1)
	{
		if (ft_inside(*s1 ,set) && !end_c)
			f_i++;
		else
			end_c = 1;
		s1++;
	}
	end_c = 0;
	while (len > 0)
	{
		if (ft_inside(*s1 ,set) && !end_c)
			r_i++;
		else
			end_c = 1;
		s1--;
		len--;
	}
}

static int ft_inside(char const s1, char const *set)
{
	while (*set != '\0')
	{
		if ( s1 == *set)
			return (1);
		set++;
	}
	return (0);
}

int main (void)
{
	ft_strtrim("2332casa2334","1234");
	return (0);
}
		

