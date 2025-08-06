/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhamis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:10:15 by tkhamis           #+#    #+#             */
/*   Updated: 2025/08/04 17:15:24 by tkhamis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *string)
{
	int	i;
	int	s;
	int	output;

	i = 0;
	s = 1;
	output = 0;
	while (string[i] == ' ' || (string[i] >= 9 && string[i] <= 13))
		i++;
	if (string[i] == '-' || string[i] == '+')
	{
		if (string[i] == '-')
			s = -1;
		i++;
	}
	while (string[i] >= '0' && string[i] <= '9')
	{
		output = output * 10 + (string[i] - '0');
		i++;
	}
	return (output * s);
}
