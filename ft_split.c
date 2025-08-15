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

char **ft_split(char const *s, char c)
{
	char **res;
	char start;
	int words = count_words(s, c);
	
	res = malloc(sizeof(char *) * (words + 1));
	while (*s)
	{
		if(*s != c)
		{
			start = s;
		while(*s && *s != c)
			s++;
		///	
		}
		else
			s++;
	}

}
