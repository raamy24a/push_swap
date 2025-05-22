/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkifgood.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:03:40 by radib             #+#    #+#             */
/*   Updated: 2025/05/22 15:55:17 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	dist(t_list **b, int i)
{
	t_list	*temp;
	int		sizehalf;
	int		j;
	int		trueorfalse;

	sizehalf = i / 2;
	j = 0;
	trueorfalse = 0;
	temp = (*b);
	while (b && j < sizehalf)
	{
		temp = temp->next;
		j++;
		if (temp->index == i)
		{
			trueorfalse = 1;
			break ;
		}
	}
	return (trueorfalse);
}

int	swapina(int toswapina, t_list **a)
{
	int	i;
	int	j;

	j = toswapina;
	i = toswapina;
	while (toswapina)
	{
		if (toswapina == 1 && j == 1)
		{
			sa(*a);
			return (j);
		}
		sa(*a);
		if (toswapina == 1)
			break ;
		ra(a);
		toswapina--;
	}
	while (i > 1)
	{
		rra(a);
		i--;
	}
	return (j);
}

void	findorderr(int toswapina, int size, t_list **a, t_list **b)
{
	int		i;
	t_list	*temp;

	i = size - 1;
	while (i >= 0)
	{
		temp = (*b);
		if (temp->index == i - toswapina - 1)
		{
			pa(a, b);
			toswapina++;
			temp = (*b);
		}
		if (temp->index == i)
		{
			pa(a, b);
			i--;
			i -= swapina(toswapina, a);
			toswapina = 0;
		}
		if (dist(b, i))
			rb(b);
		else
			rrb(b);
	}
}

void	findorder(int size, t_list **a, t_list **b)
{
	chunkingloop(size, 5.0, a, b);
	// if (size < 110)
	// 	chunkings(size, 0, a, b);
	// else
	// 	chunkingloop(size, 7.0, a, b);
	findorderr(0, size, a, b);
}
