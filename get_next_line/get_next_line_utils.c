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

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	count;
	char	*exit;

	i = 0;
	count = 0;
	while (s[i] != '\0')
		i++;
	exit = (char *)malloc(i + 1);
	if (!exit)
		return (NULL);
	while (count < i)
	{
		exit[count] = s[count];
		count++;
	}
	exit[count] = '\0';
	return (exit);
}
/*
en:
This function dynamically allocates memory for the new string
using malloc and then copy the content of the original string
  in the new memory area. Finally, return a pointer
   to the new duplicate string.
esp:
Esta función asigna memoria dinámicamente para la nueva cadena 
usando malloc y luego copia el contenido de la cadena original
 en la nueva área de memoria. Finalmente, devuelve un puntero
  a la nueva cadena duplicada.
*/
void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*mid;

	i = 0;
	mid = (char *)s;
	while (i < n)
	{
		mid[i] = '\0';
		i++;
	}
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
/*
en:
sets all bytes of a block of memory to /0.
You have to be careful with putting more holes than you need.
has the block.
s: is a pointer to the memory block you want to zero.
n: is the number of bytes you want to set to zero.
esp;
pone a /0 todos los bytes de un  bloque de memoria.
hay que tener cuidado con poner mas huecos de los que
tiene el bloque.
s: es un puntero al bloque de memoria que quieres poner a cero.
n: es el número de bytes que quieres poner a cero. 
*/