/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhamis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 14:00:38 by tkhamis           #+#    #+#             */
/*   Updated: 2025/08/09 14:19:19 by tkhamis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if (nmemb || size == 0)
		return (ptr);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr != NULL)
	{
		ft_bzero(ptr, total_size);
	}
	return (ptr);
}
