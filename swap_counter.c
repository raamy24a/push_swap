/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_counter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 13:18:25 by radib             #+#    #+#             */
/*   Updated: 2025/05/20 17:35:24 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ssa(t_list *list_a)
{
	if (list_a -> next == NULL || !list_a)
		return (1);
	swap(list_a);
	return (1);
}

int	ssb(t_list *list_b)
{
	if (list_b -> next == NULL || !list_b)
		return (1);
	swap(list_b);
	return (1);
}

int	sss(t_list *list_a, t_list *list_b)
{
	sa (list_a);
	sb (list_b);
	return (1);
}
