/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhamis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:36:58 by tkhamis           #+#    #+#             */
/*   Updated: 2025/08/06 18:09:21 by tkhamis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*w;
	const unsigned char	*s;

	w = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if ((!dest && !src) && n > 0)
		return (NULL);
	if (s > w)
	{
		while (n--)
		{
			*w++ = *s++;
		}
	}
	else
	{
		w = w + n - 1;
		s = s + n - 1;
		while (n--)
		{
			*w-- = *s--;
		}
	}
	return (dest);
}
