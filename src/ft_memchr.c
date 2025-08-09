/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhamis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 12:54:49 by tkhamis           #+#    #+#             */
/*   Updated: 2025/08/09 12:54:59 by tkhamis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char 	*ptr;
	ptr = (const unsigned char *)s;
	while(n)
	{
		if(*ptr ==(unsigned char)c)
			return ptr;
		ptr++;
		n--;
	}
	return NULL;
}
