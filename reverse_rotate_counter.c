/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_counter.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:23:00 by radib             #+#    #+#             */
/*   Updated: 2025/05/20 17:35:39 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	srra(t_list **list)
{
	reverse_rotate(list);
	return (1);
}

int	srrb(t_list **list)
{
	reverse_rotate(list);
	return (1);
}

int	srrr(t_list **list1, t_list **list2)
{
	reverse_rotate(list1);
	reverse_rotate(list2);
	return (1);
}
