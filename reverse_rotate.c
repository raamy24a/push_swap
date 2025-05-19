/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:23:00 by radib             #+#    #+#             */
/*   Updated: 2025/05/19 18:45:23 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list **list)
{
	t_list	*head;
	t_list	*new_tail;
	t_list	*last;

	if (!list || !*list || !(*list)->next)
		return ;
	head = *list;
	last = *list;
	while (last->next != NULL)
		last = last->next;
	new_tail = last->previous;
	new_tail->next = NULL;
	last->next = head;
	head->previous = last;
	*list = last;
	(*list)->previous = NULL;
}

void	rra(t_list **list)
{
	reverse_rotate(list);
	ft_printf("%s\n", "rra");
}

void	rrb(t_list **list)
{
	reverse_rotate(list);
	ft_printf("%s\n", "rrb");
}

void	rrr(t_list **list1, t_list **list2)
{
	reverse_rotate(list1);
	reverse_rotate(list2);
	ft_printf("%s\n", "rrr");
}
