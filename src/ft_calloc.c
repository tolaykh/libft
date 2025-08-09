/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhamis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 14:00:38 by tkhamis           #+#    #+#             */
/*   Updated: 2025/08/09 14:16:25 by tkhamis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*c;

	c = (unsigned char *)ptr;
	while (n)
	{
		*c++ = '\0';
		n--;
	}
	return (ptr);
}
void	*calloc(size_t nmemb, size_t size)
{
	size_t total_size = nmemb * size;
	void	*ptr = malloc(size);

	if(ptr != NULL)
	{
		ft_bzero(ptr, total_size);
	}
	return ptr;
}
