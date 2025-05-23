/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_counter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:22:37 by radib             #+#    #+#             */
/*   Updated: 2025/05/23 19:09:45 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	spa(t_list **list_a, t_list **list_b, int mode)
{
	static int	i;
	int			temp;

	if (list_a == NULL && list_b == NULL && mode == 1)
	{
		temp = i;
		i = 0;
		return (temp);
	}
	i++;
	ft_lstadd_front(list_a, list_b);
	return (i);
}

int	spb(t_list **list_a, t_list **list_b, int mode)
{
	static int	i;
	int			temp;

	if (list_a == NULL && list_b == NULL && mode == 1)
	{
		temp = i;
		i = 0;
		return (temp);
	}
	i++;
	ft_lstadd_front(list_b, list_a);
	return (i);
}
