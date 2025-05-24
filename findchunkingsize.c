/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findchunkingsize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 16:09:54 by radib             #+#    #+#             */
/*   Updated: 2025/05/24 03:01:50 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sis_rotate_faster(t_list **b, int i)
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

int	sdist_rb_pa_rrb(t_list **a, t_list **b, int i)
{
	int	rrb_ra_pa;

	rrb_ra_pa = sis_rotate_faster(b, i);
	if (rrb_ra_pa == 0)
	{
		srrb(b, 0);
		return (0);
	}
	if (rrb_ra_pa == 1)
	{
		srb(b, 0);
		return (0);
	}
	if (rrb_ra_pa == 2)
		spa(a, b, 0);
	return (1);
}

int	sswapina(int toswapina, t_list **a)
{
	int	i;
	int	j;

	j = toswapina;
	i = toswapina;
	while (toswapina)
	{
		if (toswapina == 1 && j == 1)
		{
			ssa(*a, 0);
			return (j);
		}
		ssa(*a, 0);
		if (toswapina == 1)
			break ;
		sra(a, 0);
		toswapina--;
	}
	while (i > 1)
	{
		srra(a, 0);
		i--;
	}
	return (j);
}

void	sfindorderr(int toswapina, int size, t_list **a, t_list **b)
{
	int		i;
	t_list	*temp;

	i = size - 1;
	while (i >= 0)
	{
		temp = (*b);
		if (temp->index == i - toswapina - 1)
		{
			spa(a, b, 0);
			toswapina++;
			temp = (*b);
		}
		if (temp->index == i)
		{
			spa(a, b, 0);
			i--;
			i -= sswapina(toswapina, a);
			toswapina = 0;
		}
		if (i == -1)
			break ;
		i -= sdist_rb_pa_rrb(a, b, i);
	}
}

int	findchunkingsize(int size, int n, t_list **a)
{
	int		totaloperations;
	t_list	*duplicated_a;
	t_list	*duplicated_b;

	duplicated_b = malloc(sizeof(t_list));
	totaloperations = 0;
	duplicated_a = list_duplicator(a);
	schunkloop(size, n, &duplicated_a, &duplicated_b);
	sfindorderr(0, size, &duplicated_a, &duplicated_b);
	freelist(&duplicated_a);
	freelist(&duplicated_b);
	totaloperations = sra(NULL, 1) + srb(NULL, 1) + srr(NULL, NULL, 1)
		+ ssa(NULL, 1) + ssb(NULL, 1) + sss(NULL, NULL, 1) + spa(NULL, NULL, 1)
		+ spb(NULL, NULL, 1) + srra(NULL, 1) + srrb(NULL, 1)
		+ srrr(NULL, NULL, 1);
	return (totaloperations);
}
