/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:22:48 by radib             #+#    #+#             */
/*   Updated: 2025/05/24 03:05:53 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **list)
{
	t_list	*head;
	t_list	*new_head;
	t_list	*last;

	if (!list || !*list || !(*list)->next)
		return ;
	head = *list;
	new_head = head->next;
	last = *list;
	while (last->next)
		last = last->next;
	new_head->previous = NULL;
	head->next = NULL;
	last->next = head;
	head->previous = last;
	*list = new_head;
}

void	ra(t_list **list)
{
	rotate(list);
	ft_printf("%s\n", "ra");
}

void	rb(t_list **list)
{
	rotate(list);
	ft_printf("%s\n", "rb");
}

void	rr(t_list **listb, t_list **lista)
{
	rotate(listb);
	rotate(lista);
	ft_printf("%s\n", "rr");
}
