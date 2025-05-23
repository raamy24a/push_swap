/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_counter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:22:37 by radib             #+#    #+#             */
/*   Updated: 2025/05/23 16:30:41 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	spa(t_list **list_a, t_list **list_b)
{
	static int	i;

	i++;
	ft_lstadd_front(list_a, list_b);
	return (i);
}

int	spb(t_list **list_a, t_list **list_b)
{
	static int	i;

	i++;
	ft_lstadd_front(list_b, list_a);
	return (i);
}
