/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhamis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:36:58 by tkhamis           #+#    #+#             */
/*   Updated: 2025/08/20 16:21:17 by tkhamis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*w;
	const unsigned char	*s;

	if ((n == 0 || dest == src))
		return (dest);
	w = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (s > w)
	{
		while (n--)
			*w++ = *s++;
	}
	else
	{
		w += n;
		s += n;
		while (n--)
			*--w = *--s;
	}
	return (dest);
}
/*#include <string.h>
int	main(void) {
   memmove(NULL, NULL, 1);  // UB -> likely segfault
	return (0);
}
*/
