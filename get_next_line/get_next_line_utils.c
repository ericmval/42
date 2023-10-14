/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 20:08:19 by emartin2          #+#    #+#             */
/*   Updated: 2023/10/13 20:08:24 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
 #include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*exit;
	char	*o_exit;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	exit = (char *) malloc (len + 1);
	if (!exit)
		return (NULL);
	o_exit = exit;
	while (*s1)
	{
		*exit = *s1;
		exit++;
		s1++;
	}
	while (*s2)
	{
		*exit = *s2;
		exit++;
		s2++;
	}
	*exit = '\0';
	return (o_exit);
}
//junta 2 estrings

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
// nide el largo de un string

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			ent;
	unsigned char	*b;
    size_t          i;

    i = 0;
	ent = nmemb * size;
	b = (unsigned char *) malloc(ent);
	if (!b)
		return (NULL);
    while (i < ent)
    {
        b[i] = '\0';
        i++;
    }
	return ((void *) b);
}
//reserva memoria y la llena de 000

char	*ft_strchr(const char *s, int c)
{
	char	*exit;

	c = (char) c;
	exit = (char *) s;
	while (*exit != '\0')
	{
		if (*exit == c)
			return (exit);
		exit++;
	}
	if (c == '\0')
		return (exit);
	return (NULL);
}
// devuleve puntero a la primera coincidencia
// de c en s, si no encuentra nada devuelve null

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
en:
It is used to safely copy a string. booking
the last slot for /0.
In string you have to put the size of the destination buffer.
You can know the size by doing a siceoff or when it is declared
the variable, if a smaller number is set there is a risk of overflow
esp:
se usa para copiar una cadena de manera segura. reserva
el ultimo hueco para /0.
en string hay que colocar el tamaño del bufer de destino.
se puede saber el tamaño haciendo un siceoff o cuando se declara
la variable, si se pone un numero menor existe riesdo de desbordamiento
*/