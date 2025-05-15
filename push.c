/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:22:37 by radib             #+#    #+#             */
/*   Updated: 2025/05/15 16:13:27 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_front(t_list **destination, t_list **source)
{
	if (!source)
		return ;
	if (!*destination)
	{
		*destination = source;
		(*destination)-> next = NULL;
		(*destination)-> previous = NULL;
	}
	else
	{
		(*source)-> next = *destination;
		*destination = source;
		(*destination)-> previous = NULL;
		(*destination)-> next -> previous = *destination;
	}
	if ((*source)-> next)
	{
		source = (*source)-> next;
		(*source)-> previous = NULL;
	}
	else
		source = NULL;
}

void	pa(t_list **list_a, t_list *list_b)
{
	ft_lstadd_front(list_a, list_b);
}
