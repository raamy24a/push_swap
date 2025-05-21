/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:22:37 by radib             #+#    #+#             */
/*   Updated: 2025/05/21 19:26:12 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_front(t_list **destination, t_list **source)
{
	t_list	*tmp;

	if (!source || !*source)
		return ;
	tmp = *source;
	*source = tmp->next;
	if (*source)
		(*source)->previous = NULL;
	tmp->next = *destination;
	tmp->previous = NULL;
	if (*destination)
		(*destination)->previous = tmp;
	*destination = tmp;
}


void	pa(t_list **list_a, t_list **list_b)
{
	ft_lstadd_front(list_a, list_b);
	ft_printf("%s\n", "pa");
}

int	pb(t_list **list_a, t_list **list_b)
{
	ft_lstadd_front(list_b, list_a);
	ft_printf("%s\n", "pb");
	return (1);
}
