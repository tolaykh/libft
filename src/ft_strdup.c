/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhamis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 14:35:00 by tkhamis           #+#    #+#             */
/*   Updated: 2025/08/09 15:18:10 by tkhamis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t  ft_strlen(const char *s)
{
        size_t  len;

        len = 0;
        while (s[len] != '\0')
                len++;
        return (len);
}

char *ft_strdup(const char *s)
{
        char    *str = malloc(ft_strlen(s) + 1);
        size_t i = 0;

        if (!str)
                return (NULL);
        while (s[i])
        {
                str[i] = s[i];
                i++;
        }
        str[i] = '\0';
        return (str);
}
