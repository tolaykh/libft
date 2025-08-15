/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhamis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:53:39 by tkhamis           #+#    #+#             */
/*   Updated: 2025/08/15 12:59:52 by tkhamis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

size_t	get_start(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
	{
		i++;
	}
	return (i);
}

size_t	get_end(char const *s1, char const *set, size_t start)
{
	size_t	end;

	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]))
	{
		end--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*trim_s;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	if (*s1 == '\0')
		return (ft_strdup(""));
	start = get_start(s1, set);
	end = get_end(s1, set, start);
	if (start > end)
		return (ft_strdup(""));
	trim_s = malloc(sizeof(char) * (end - start + 2));
	if (!trim_s)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		trim_s[i++] = s1[start++];
	}
	trim_s[i] = '\0';
	return (trim_s);
}
