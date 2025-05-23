/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_counter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 13:18:25 by radib             #+#    #+#             */
/*   Updated: 2025/05/23 19:10:37 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ssa(t_list *list_a, int mode)
{
	static int	i;
	int			temp;

	if (list_a == NULL && mode == 1)
	{
		temp = i;
		i = 0;
		return (temp);
	}
	i++;
	if (list_a -> next == NULL || !list_a)
		return (i);
	swap(list_a);
	return (i);
}

int	ssb(t_list *list_b, int mode)
{
	static int	i;
	int			temp;

	if (list_b == NULL && mode == 1)
	{
		temp = i;
		i = 0;
		return (temp);
	}
	i++;
	if (list_b -> next == NULL || !list_b)
		return (i);
	swap(list_b);
	return (i);
}

int	sss(t_list *list_a, t_list *list_b, int mode)
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
	sa (list_a);
	sb (list_b);
	return (i);
}
