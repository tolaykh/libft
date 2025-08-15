/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhamis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 13:44:11 by tkhamis           #+#    #+#             */
/*   Updated: 2025/08/15 16:12:26 by tkhamis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	calc_total_len(int count, int is_negative)
{
	if (is_negative)
		return (count + 1);
	return (count);
}

char	*fill(int n, int total_len, int is_negative)
{
	char	*str;
	int		index;

	str = malloc(sizeof(char) * (total_len + 1));
	if (!str)
		return (NULL);
	index = total_len - 1;
	while (index >= is_negative)
	{
		str[index] = (n % 10) + '0';
		n = n / 10;
		index--;
	}
	if (is_negative)
		str[0] = '-';
	str[total_len] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int	count;
	int	tmp;
	int	total_len;
	int	is_negative;

	count = 0;
	tmp = n;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	tmp = n;
	count = count_digits(n);
	total_len = calc_total_len(count, is_negative);
	return (fill(n, total_len, is_negative));
}
