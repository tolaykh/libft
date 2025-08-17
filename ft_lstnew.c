/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhamis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 17:26:48 by tkhamis           #+#    #+#             */
/*   Updated: 2025/08/17 17:50:22 by tkhamis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list *ft_lstnew(void *content)
{
	t_list *node = malloc(sizeof(t_list));
	if(!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
