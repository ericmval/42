/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 22:10:29 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/29 22:10:45 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int		ft_word_count(const char *s, int *e, char c);
static void		ft_strfill(char const *s, int init, int e, char *exit);
static size_t	ft_split_count(char const *s, char c);
static void		ft_freemem(size_t i, char **exit);

char	**ft_split(char const *s, char c)
{
	char	**exit;
	size_t	i;
	int		e;
	size_t	init;

	i = 0;
	e = 0;
	exit = (char **)ft_calloc(ft_split_count(s, c) + 1, sizeof(char *));
	if (!exit)
		return (NULL);
	while (i < ft_split_count(s, c))
	{
		init = ft_word_count(s, &e, c);
		exit[i] = (char *)ft_calloc(e - init + 1, 1);
		if (!exit[i])
		{
			ft_freemem(i, exit);
			return (NULL);
		}
		ft_strfill(s, init, e, exit[i]);
		i++;
	}
	return (exit);
}
static void	ft_strfill(char const *s, int init, int e, char *exit)
{
	int	i;

	i = 0;
	while (init < e)
	{
		exit[i] = s[init];
		init++;
		i++;
	}
	exit[i] = '\0';
}

static void	ft_freemem(size_t i, char **exit)
{
	i--;
	while (i >= 0)
	{
		free(exit[i]);
		i--;
	}
	free(exit);
}

/*
static char	*ft_strfill(char const *s,int init, int e)
{
	char	*exit;
	int		count;
	int		i;

	i = 0;
	count = e - init;
	while (i < count)
	{
		exit[i] = s[init];
		init++;
		i++;
	}
	return (exit);
}
*/
static int	ft_word_count(const char *s, int *e, char c)
{
	int	init;
	int	first;

	first = 1;
	init = *e;
	while ((s[*e] != c || first) && ((size_t)*e < ft_strlen(s)))
	{
		if (s[*e] != c)
			first = 0;
		else if (s[*e] == c)
			init++;
		(*e)++;
	}
	return (init);
}
static size_t	ft_split_count(char const *s, char c)
{
	size_t	len;
	size_t	i;
	int		first;
	size_t	count;

	count = 0;
	first = 1;
	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		if (s[i] != c)
		{
			if (first)
				count++;
			first = 0;
		}
		else
			first = 1;
		i++;
	}
	return (count);
}

/*
int main (void)
{
	char	bus;
	char	**test;

	char    texto[100] = "   hola me llamo Eric   ";
	bus = ' ';
	int i =0;
	test = ft_split(texto,bus);
	while (i < 4)
	{
		printf("%s\n",test[i]);
		i++;
	}
	return (0);
}
*/