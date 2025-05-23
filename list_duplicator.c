/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_duplicator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 16:49:30 by radib             #+#    #+#             */
/*   Updated: 2025/05/23 22:22:06 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*list_duplicator(t_list **a)
{
	t_list	*duplicated_a;
	t_list	*temp_duplicated_a;
	t_list	*temp_a;

	temp_a = (*a);
	duplicated_a = malloc(sizeof(t_list));
	temp_duplicated_a = duplicated_a;
	duplicated_a->previous = NULL;
	duplicated_a->content = (*a)->content;
	duplicated_a->next = NULL;
	duplicated_a->index = (*a)->index;
	temp_a = temp_a->next;
	while (temp_a)
	{
		ft_lstadd_back(&temp_duplicated_a, temp_a->content);
		temp_duplicated_a->next->index = temp_a->index;
		temp_a = temp_a->next;
		temp_duplicated_a = temp_duplicated_a->next;
	}
	return (duplicated_a);
}
