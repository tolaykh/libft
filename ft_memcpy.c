/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhamis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:14:02 by tkhamis           #+#    #+#             */
/*   Updated: 2025/08/06 18:10:21 by tkhamis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*w;
	const unsigned char	*s;

	w = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!w && !s)
		return (NULL);
	if (w == s || n == 0)
		return (dest);
	while (n)
	{
		*w++ = *s++;
		n--;
	}
	return (dest);
}
