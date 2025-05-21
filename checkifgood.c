/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkifgood.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:03:40 by radib             #+#    #+#             */
/*   Updated: 2025/05/21 19:31:11 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotateorder(int siz, int i, t_list **a, t_list **b)
{
	t_list	*t;
	int		j;

	j = 0;
	while (i != (*b)->index && i - 1 != (*b)->index)
		rb(b);
	if (i - 1 == (*b)->index)
	{
		pa(a, b);
		t = (*b);
		while (j++ < ((siz - i) / 2) && t->index != i)
			t = t->next;
		if (j < ((siz - i) / 2))
			while (i != (*b)->index)
				rb(b);
		else
			while (i != (*b)->index)
				rrb(b);
		pa(a, b);
		sa(*a);
		return (2);
	}
	pa(a, b);
	return (1);
}

int	reverse_rotateorder(int siz, int i, t_list **a, t_list **b)
{
	t_list	*t;
	int		j;

	j = 0;
	while (i != (*b)->index && i - 1 != (*b)->index)
		rrb(b);
	if (i - 1 == (*b)->index)
	{
		pa(a, b);
		t = (*b);
		while (j++ < ((siz - i) / 2) && t->index != i)
			t = t->next;
		if (j < ((siz - i) / 2))
			while (i != (*b)->index)
				rb(b);
		else
			while (i != (*b)->index)
				rrb(b);
		pa(a, b);
		sa(*a);
		return (2);
	}
	pa(a, b);
	return (1);
}

void	findorderr(int siz, t_list **a, t_list **b)
{
	int		i;
	int		j;
	t_list	*t;

	i = 0;
	siz--;
	while (i < siz)
	{
		t = (*b);
		j = 0;
		while (j++ < ((siz - i) / 2) && t->index != siz - i
			&& t->index != siz - i - 1)
			t = t->next;
		if (t->index == siz - i || t->index == siz - i - 1)
			i += rotateorder(siz, siz - i, a, b);
		else
			i += reverse_rotateorder(siz, siz - i, a, b);
	}
}

void	findorder(int size, t_list **a, t_list **b)
{
	chunkingloop(size, 5.0, a, b);
	findorderr(size, a, b);
	if ((*b)->index)
		pa(a, b);
}
