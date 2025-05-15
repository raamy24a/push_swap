/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:23:00 by radib             #+#    #+#             */
/*   Updated: 2025/05/15 18:47:54 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list **list)
{
	t_list	*head;
	t_list	*new_head;
	t_list	*last;

	if (!list || !*list || !(*list)->next)
		return ;
	head = *list;
	last = *list;
	while (last->next != NULL)
		last = last->next;
	last->next = (*list);
	new_head = last;
	
	*list = new_head;
}