/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhamis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 18:53:18 by tkhamis           #+#    #+#             */
/*   Updated: 2025/08/15 19:28:38 by tkhamis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_words(const char *s, char c)
{
	int words = 0;
	int count = 0;
	while(*s)
	{
		if (*s != c && words == 0)
		{
			words = 1;
			count++;
		}
		if (*s == c)
			words = 0;
		s++;
	}
	return (count);
}

char *word_dup(const char *s, int len)
{
    char *word;
    int i = 0;

    word = malloc(sizeof(char) * (len + 1));
    if (!word)
        return (NULL);
    while (i < len)
    {
        word[i] = s[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}
void free_i(char **res, int i)
{
    while (i >= 0)
    {
        free(res[i]);
        i--;
    }
    free(res);
}

char **ft_split(char const *s, char c)
{
	int len;
	int i = 0;
	char **res;
	char *start;
	int words = count_words(s, c);
	
	if(!s)
		return (NULL);
	res = malloc(sizeof(char *) * (words + 1));
	if(!res)
		return (NULL);
	while (*s)
	{
		if(*s != c)
		{
			start = s;
			while(*s && *s != c)
				s++;
			len = s - start;
			res[i] = word_dup(start, len);
			if (!res[i])
				return (free_i(res, i - 1), NULL);
			i++;
		}
		else
			s++;
	}
	res[i] = NULL;
	return (res);
}
