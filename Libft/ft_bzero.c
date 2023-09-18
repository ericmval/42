/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:11:18 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/18 19:29:47 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*mid;

	i = 0;
	mid = (char *)s;
	while (i < n -1)
	{
		mid[i] = '\0';
		i++;
	}
	s = (void *)mid;
}
/*
int main (void)
{
	char test[19] = "canalla";
	int i = 0;
	ft_bzero(test,5);
	while (i < 15)
	{
		printf("%c\n",test[i]);
		printf("%p\n", test);
		i++;
	}
	return (0);
}
*/