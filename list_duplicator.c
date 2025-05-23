/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_duplicator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 16:49:30 by radib             #+#    #+#             */
/*   Updated: 2025/05/23 17:33:59 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*list_duplicator(t_list **a, int size)
{
	t_list	*duplicated_a;
	t_list	*temp_duplicated_a;
	t_list	*temp_a;

	temp_a = (*a);
	duplicated_a = malloc(sizeof(t_list) * (size));
	temp_duplicated_a = duplicated_a;
	while (temp_a)
	{
		temp_duplicated_a->content = temp_a->content;
		temp_duplicated_a->previous = temp_a->previous;
		temp_duplicated_a->next = temp_a->next;
		temp_duplicated_a->index = temp_a->index;
		temp_a = temp_a->next;
		temp_duplicated_a = temp_duplicated_a->next;
	}
	return (duplicated_a);
}
