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

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*w;
	const unsigned char	*s;

	w = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n)
	{
		*w++ = *s++;
		n--;
	}
	return (dest);
}
