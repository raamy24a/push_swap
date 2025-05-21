/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunking copy 2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:01:30 by radib             #+#    #+#             */
/*   Updated: 2025/05/21 18:47:21 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	chunking_four(int size, int j, t_list **a, t_list **b)
{
	t_list	*t;
	int		i;

	i = 0;
	while (i < size - j)
	{
		t = (*a);
		if (t->index > (size * 0.2))
		{
			pb(a, b);
			j++;
		}
		else
			ra(a);
		t = t->next;
		i++;
	}
	while (*a)
		pb(a, b);
	return (j);
}

static int	chunking_three(int size, int j, t_list **a, t_list **b)
{
	t_list	*t;
	int		i;

	i = 0;
	while (i < size - j)
	{
		t = (*a);
		if (t->index > size * 0.4)
		{
			pb(a, b);
			j++;
		}
		else
			ra(a);
		t = t->next;
		i++;
	}
	j = chunking_four(size, j, a, b);
	return (j);
}

static int	chunking_two(int size, int j, t_list **a, t_list **b)
{
	t_list	*t;
	int		i;

	i = 0;
	while (i < size - j)
	{
		t = (*a);
		if (t->index > size * 0.6)
		{
			pb(a, b);
			j++;
		}
		else
			ra(a);
		t = t->next;
		i++;
	}
	j = chunking_three(size, j, a, b);
	return (j);
}

int	chunking(int size, int i, t_list **a, t_list **b)
{
	t_list	*t;
	int		j;

	j = 0;
	while (i < size)
	{
		t = (*a);
		if (t->index > size * 0.8)
		{
			pb(a, b);
			j++;
		}
		else
			ra(a);
		t = t->next;
		i++;
	}
	j = chunking_two(size, j, a, b);
	return (j);
}
