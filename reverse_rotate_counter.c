/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_counter.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:23:00 by radib             #+#    #+#             */
/*   Updated: 2025/05/23 16:31:14 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	srra(t_list **list)
{
	static int	i;

	i++;
	reverse_rotate(list);
	return (i);
}

int	srrb(t_list **list)
{
	static int	i;

	i++;
	reverse_rotate(list);
	return (i);
}

int	srrr(t_list **list1, t_list **list2)
{
	static int	i;

	i++;
	reverse_rotate(list1);
	reverse_rotate(list2);
	return (i);
}
