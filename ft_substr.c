/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhamis <tkhamis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:12:51 by tkhamis           #+#    #+#             */
/*   Updated: 2025/08/17 17:41:41 by tkhamis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ftl(char const *s, size_t cpy_len, size_t len, int start)
{
	size_t	i;
	char	*substr;

	i = 0;
	if (cpy_len > len)
		cpy_len = len;
	substr = malloc(cpy_len + 1);
	if (!substr)
		return (NULL);
	while (i < cpy_len)
	{
		substr[i] = s[(size_t)start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*e;
	size_t	cpy_len;
	char	*sbs;

	if (start >= ft_strlen(s))
	{
		e = malloc(1);
		if (!e)
			return (NULL);
		e[0] = '\0';
		return (e);
	}
	cpy_len = (ft_strlen(s)) - (size_t)start;
	sbs = ftl(s, cpy_len, len, start);
	return (sbs);
}
