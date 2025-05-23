/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findchunkingsize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 16:09:54 by radib             #+#    #+#             */
/*   Updated: 2025/05/23 17:09:14 by radib            ###   ########.fr       */
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
		srrb(b);
		return (0);
	}
	if (rrb_ra_pa == 1)
	{
		srb(b);
		return (0);
	}
	if (rrb_ra_pa == 2)
		spa(a, b);
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
			ssa(*a);
			return (j);
		}
		ssa(*a);
		if (toswapina == 1)
			break ;
		sra(a);
		toswapina--;
	}
	while (i > 1)
	{
		srra(a);
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
			spa(a, b);
			toswapina++;
			temp = (*b);
		}
		if (temp->index == i)
		{
			spa(a, b);
			i--;
			i -= sswapina(toswapina, a);
			toswapina = 0;
		}
		if (i == -1)
			break ;
		i -= dist_rb_pa_rrb(a, b, i);
	}
}

int	findchunkingsize(int size, int n, t_list **a, t_list **b)
{
	int		totaloperations;
	t_list	*duplicated_a;

	totaloperations = 0;
	duplicated_a = list_duplicator(a, size);
	schunkingloop(size, n, duplicated_a, b);
	free(duplicated_a);
	totaloperations = sra(NULL) + srb(NULL) + srr(NULL, NULL)
		+ ssa(NULL) + ssb(NULL) + sss(NULL, NULL) + spa(NULL, NULL)
		+ spb(NULL, NULL) + srra(NULL) + srrb(NULL) + srrr(NULL, NULL);
	return (totaloperations);
}
