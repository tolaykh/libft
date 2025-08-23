/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhamis <tkhamis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 18:53:18 by tkhamis           #+#    #+#             */
/*   Updated: 2025/08/21 16:56:24 by tkhamis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static int	count_words(const char *s, char c)
{
	int	words;
	int	count;

	words = 0;
	count = 0;
	while (*s)
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

static char	*word_dup(const char *s, size_t len)
{
	char	*word;
	size_t	i;

	i = 0;
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

static void	free_i(char **res, int i)
{
	while (i >= 0)
	{
		free(res[i]);
		i--;
	}
	free(res);
}

static int	fill(char **res, const char *s, char c)
{
	const char	*start;
	size_t		len;
	int			i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		start = s;
		while (*s && *s != c)
			s++;
		len = (size_t)(s - start);
		res[i] = word_dup(start, (int)len);
		if (!res[i])
		{
			free_i(res, i - 1);
			return (0);
		}
		i++;
	}
	res[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	res = malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	if (!fill(res, s, c))
		return (NULL);
	return (res);
}

int main()
{
	char **t;
	t = ft_split("hello world 42 amman",' ');
	int i = 0;
	while(t && t[i])
	{

		printf("%s\n",t[i]);
		free(t[i]);
		i++;
	}
	free(t);
	return (0);
}
