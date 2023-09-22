/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 23:40:25 by emartin2          #+#    #+#             */
/*   Updated: 2023/09/18 18:26:48 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#ifndef FT_LIBFT_H
#define FT_LIBFT_H

int ft_isalpha(int c);
int ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
char *ft_strchr(const char *s, int c);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int ft_strcmp(const char *s1, const char *s2);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *big,	const char *little, size_t len);
char *ft_strrchr(const char *s, int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
size_t ft_strlen(const char *s);
void ft_bzero(void *s, size_t n);
void *ft_memset(void *s, int c,size_t n);
void *ft_memcpy(void *dest, const void * src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
int ft_atoi(const char *nptr);
#endif
