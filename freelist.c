/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freelist.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 02:57:06 by radib             #+#    #+#             */
/*   Updated: 2025/05/26 18:00:44 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	freelist(t_list **list)
{
	t_list	*current;
	t_list	*next;

	current = (*list);
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	return (0);
}
