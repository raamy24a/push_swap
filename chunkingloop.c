/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunkingloop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 18:52:12 by radib             #+#    #+#             */
/*   Updated: 2025/05/21 22:26:49 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	chunkingloop(int size, double n, t_list **a, t_list **b)
{
	t_list		*t;
	int			i;
	double		k;

	k = n - 1;
	while (k)
	{
		i = 0;
		while (i < size - (1 - (k + 1) / n) * size)
		{
			t = (*a);
			if (t->index > (size * (k / n)))
				pb(a, b);
			else
				ra(a);
			t = t->next;
			i++;
		}
		k--;
	}
	while (*a)
		pb(a, b);
	return (size);
}
