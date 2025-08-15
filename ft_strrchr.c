/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhamis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 18:12:31 by tkhamis           #+#    #+#             */
/*   Updated: 2025/08/09 12:56:15 by tkhamis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		ch;
	const char	*start;

	start = s;
	ch = (char)c;
	while (*s)
	{
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	while (s >= start)
	{
		if ((unsigned char)*s == (unsigned char)ch)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
