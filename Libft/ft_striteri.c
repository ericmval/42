/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:07:18 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/28 11:42:03 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return;
	
	i = 0;
	while (s[i] != '\0')
	{
		f(i,&s[i]);
		i++;
	}
}
/*
int main(void)
{
	char original[] = "HelloWorld";
	printf("Original: %s\n", original);
	striteri(original, to_upper_if_odd);
	printf("Modified: %s\n", original);
	return 0;
}
*/
