/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:35:09 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/27 19:02:26 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static char *ft_reserve(int n, int *negative, int *count_n);
static char *ft_putstr(char *exit, int negative, int n, int count_n);

char *ft_itoa(int n)
{
	int negative;
	char *exit;
	int count_n;

	if (n == -2147483648)
	{
		exit = (char *) malloc(12);
			if (!exit)
				return (NULL);
		ft_strlcpy(exit,"-2147483648",12);
		return (exit);
	}
	if (n == 0)
	{
		exit = malloc(2);
		if (!exit)
			return (NULL);
		ft_strlcpy(exit,"0",2);
		return exit;
	}
	exit = ft_reserve(n, &negative, &count_n);
	if (!exit)
		return (NULL);
	return (ft_putstr(exit, negative, n, count_n));
}

static char *ft_putstr(char *exit, int negative, int n, int count_n)
{
	int i;

	i = 0;

	if (negative)
	{
		exit[0] = '-';
		n = -n;
	}

	while (count_n - i > 0)
	{
		exit[count_n -1 + negative - i] = (n % 10) + '0';
		i++;
		n /= 10;
	}
	
	exit[count_n + negative] = '\0';
	return (exit);
}

static char *ft_reserve(int n, int *negative, int *count_n)
{
	char *exit;

	*count_n = 0;
	*negative = 0;
	if (n < 0)
	{
		n = -n;
		*negative = 1;
	}
	while (n >= 1)
	{
		n /= 10;
		(*count_n)++;
	}
	exit = (char *)malloc(*count_n + *negative + 1);  // +1 for '\0'
	if (!exit)
		return (NULL);
	return (exit);
}
/*
int main(void)
{
	char *test;
	test = ft_itoa(-2147483648);
	printf("%s\n", test);
	free(test);
	return (0);
}
*/
