/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_counter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:22:37 by radib             #+#    #+#             */
/*   Updated: 2025/05/20 17:35:45 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	spa(t_list **list_a, t_list **list_b)
{
	ft_lstadd_front(list_a, list_b);
	return (1);
}

int	spb(t_list **list_a, t_list **list_b)
{
	ft_lstadd_front(list_b, list_a);
	return (1);
}
