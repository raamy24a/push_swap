/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:22:37 by radib             #+#    #+#             */
/*   Updated: 2025/05/15 17:30:48 by radib            ###   ########.fr       */
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
	printf("%s\n", pa);
}

void	pb(t_list **list_b, t_list *list_a)
{
	ft_lstadd_front(list_b, list_a);
	printf("%s\n", pb);
}