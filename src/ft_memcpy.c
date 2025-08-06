/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhamis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:14:02 by tkhamis           #+#    #+#             */
/*   Updated: 2025/08/06 12:33:17 by tkhamis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*w;
	const unsigned char	*s;

	w = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while(n)
	{
		*w++ = *s++; 
		n--;
	}
	return (dest);
}
