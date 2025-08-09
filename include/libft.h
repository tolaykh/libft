/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhamis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 12:59:56 by tkhamis           #+#    #+#             */
/*   Updated: 2025/08/09 16:53:01 by tkhamis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

// Function prototypes
size_t  ft_strlen(const char *s);
void    *ft_memcpy(void *dst, const void *src, size_t n);
int             ft_atoi(const char *string);
void    ft_bzero(void *s, size_t n);
void    *ft_calloc(size_t nmemb, size_t size);
int             ft_isalnum(int c);
int             ft_isalpha(int c);
int             ft_isascii(int c);
int             ft_isdigit(int c);
int             ft_isprint(int c);
void    *ft_memchr(const void *s, int c, size_t n);
int             ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memset(void *ptr, int x, size_t n);
char    *ft_strchr(const char *s, int c);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
int             ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strnstr(const char *hay, const char *needle, size_t n);
char    *ft_strrchr(const char *s, int c);
int             ft_tolower(int c);
int             ft_toupper(int c);
char    *strdup(const char *s);
size_t  ft_strlcat(char *dst, const char *src, size_t dsize);

#endif
