/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findorder.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:03:40 by radib             #+#    #+#             */
/*   Updated: 2025/08/05 14:04:08 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_rotate_faster(t_list **b, int i)
{
	t_list	*temp;
	int		sizehalf;
	int		j;

	sizehalf = i / 2;
	j = 0;
	temp = (*b);
	if (b && temp->index == i)
		return (2);
	while (b && j < sizehalf)
	{
		temp = temp->next;
		j++;
		if (temp->index == i)
			return (1);
	}
	return (0);
}

int	dist_rb_pa_rrb(t_list **a, t_list **b, int i)
{
	int	rrb_ra_pa;

	rrb_ra_pa = is_rotate_faster(b, i);
	if (rrb_ra_pa == 0)
	{
		rrb(b);
		return (0);
	}
	if (rrb_ra_pa == 1)
	{
		rb(b);
		return (0);
	}
	if (rrb_ra_pa == 2)
		pa(a, b);
	return (1);
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
		if (i == -1)
			break ;
		i -= dist_rb_pa_rrb(a, b, i);
	}
}

void	findorder(int size, t_list **a, t_list **b)
{
	double	n;
	int		total;
	double	bestn;
	int		bestotal;

	n = 2;
	bestotal = 1999999999;
	if (size <= 99)
	{
		chunkingloop(size, 1, a, b);
		findorderr(0, size, a, b);
		return ;
	}
	while (n < 19)
	{
		total = findchunkingsize(size, n, a);
		if (total < bestotal)
		{
			bestotal = total;
			bestn = n;
		}
		n += 1;
	}
	chunkingloop(size, bestn, a, b);
	findorderr(0, size, a, b);
}
