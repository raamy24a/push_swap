/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunkingtwoo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:01:30 by radib             #+#    #+#             */
/*   Updated: 2025/05/21 18:48:10 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	chunking_five(int size, int j, t_list **a, t_list **b)
{
	t_list	*t;
	int		i;

	i = 0;
	while (i < size - j)
	{
		t = (*a);
		if (t->index > (size * 0.1666))
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

static int	chunking_four(int size, int j, t_list **a, t_list **b)
{
	t_list	*t;
	int		i;

	i = 0;
	while (i < size - j)
	{
		t = (*a);
		if (t->index > size * 0.3333)
		{
			pb(a, b);
			j++;
		}
		else
			ra(a);
		t = t->next;
		i++;
	}
	j = chunking_five(size, j, a, b);
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
		if (t->index > size * 0.5)
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
		if (t->index > size * 0.6666)
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

int	chunkings(int size, int i, t_list **a, t_list **b)
{
	t_list	*t;
	int		j;

	j = 0;
	while (i < size)
	{
		t = (*a);
		if (t->index > size * 0.8333)
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
