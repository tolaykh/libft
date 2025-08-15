/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhamis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 16:14:21 by tkhamis           #+#    #+#             */
/*   Updated: 2025/08/15 16:34:05 by tkhamis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	if(!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);

	char *str = malloc(s1_len + s2_len + 1);
	if (!str)
		return 	(NULL);
	ft_memcpy(str, s1, s1_len);
	while(str[s1_len + 1])
	{
		str[s1_len + 1] = 
	}
}
