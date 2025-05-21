/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunkingloop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 18:52:12 by radib             #+#    #+#             */
/*   Updated: 2025/05/21 19:27:40 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	chunkingloop(int size, double n, t_list **a, t_list **b)
{
	t_list		*t;
	int			i;
	int			j;
	double		k;

	j = 0;
	k = n - 1;
	while (1.0 / (n / k))
	{
		i = 0;
		while (i < size - j)
		{
			t = (*a);
			if (t->index > (size * 1.0 / (n / k)))
				j = pb(a, b);
			else
				ra(a);
			t = t->next;
			i++;
		}
		k--;
	}
	while (*a)
		pb(a, b);
	return (j);
}
