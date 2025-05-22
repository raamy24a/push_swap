/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkifgood.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:03:40 by radib             #+#    #+#             */
/*   Updated: 2025/05/22 12:22:01 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	dist_r(t_list **b, t_list *temp, int i)
{
	int		j;

	j = 0;
	temp = (*b);
	while (temp->next)
		temp = temp->next;
	if (!temp->index)
		return (9999);
	while (temp->index != i)
	{
		temp = temp->previous;
		j++;
	}
	return (j);
}

int	dist(t_list **b, int i)
{
	t_list	*temp;
	int		j;

	j = 0;
	temp = (*b);
	while (temp->index != i && temp->next)
	{
		temp = temp->next;
		j++;
	}
	return (j);
}

void	swapina(int toswapina, t_list **a)
{
	int	i;

	i = toswapina;
	while (toswapina--)
	{
		sa(*a);
		ra(a);
	}
	while (i--)
		rra(a);
}

void	findorderr(int toswapina, int size, t_list **a, t_list **b)
{
	int		i;
	t_list	*temp;

	i = size - 1;
	while (i > 0)
	{
		temp = (*b);
		if (temp->index == i - toswapina - 1)
		{
			pa(a, b);
			i--;
			toswapina++;
			temp = (*b);
		}
		if (temp->index == i)
		{
			pa(a, b);
			i--;
			swapina(toswapina, a);
		}
		if (dist(b, i) < (i + 1) / 2)
			rb(b);
		else
			rrb(b);
	}
}

void	findorder(int size, t_list **a, t_list **b)
{
	chunkingloop(size, 5.0, a, b);
	findorderr(0, size, a, b);
	// if ((*b)->index)
		// pa(a, b);
}
