/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunkingloop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 18:52:12 by radib             #+#    #+#             */
/*   Updated: 2025/05/26 16:33:07 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	schunkloop(int size, double n, t_list **cated_a, t_list **cated_b)
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
			t = (*cated_a);
			if (t->index < (size - size * (k / n)))
				spb(cated_a, cated_b, 0);
			else
				sra(cated_a, 0);
			t = t->next;
			i++;
		}
		k--;
	}
	while (*cated_a)
		spb(cated_a, cated_b, 0);
	return (size);
}

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
			if (t->index < (size - size * (k / n)))
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
