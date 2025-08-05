/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:22:43 by radib             #+#    #+#             */
/*   Updated: 2025/08/05 14:20:27 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_twoo_and_one(t_list **a, int i)
{
	if (i == 2)
		if ((*a)->content > (*a)->next->content)
			ra(a);
}
void	sortsmall(t_list **a)
{
	while ((*a)->content > (*a)->next->next->content)
		ra(a);
	if ((*a)->next->content > (*a)->next->next->content)
		rra(a);
	if ((*a)->content > (*a)->next->content)
		sa(*a);
}

void	sortsmedium(t_list **a, t_list **b)
{
	int	passed;

	passed = 0;
	while (passed != 1)
	{
		if ((*a)->index == 0)
		{
			pb(a, b);
			passed++;
		}
		else
			ra(a);
	}
	if (((*a)->index == 2 && (*a)->next ->index == 3
			&& (*a)->next->next->index == 4))
		;
	else
		sortsmall(a);
	pa(a, b);
}

void	sortfive(t_list **a, t_list **b)
{
	int	passed;

	passed = 0;
	while (passed != 2)
	{
		if ((*a)->index <= 1)
		{
			pb(a, b);
			passed++;
		}
		else
			ra(a);
	}
	if (((*a)->index == 3 && (*a)->next ->index == 4
			&& (*a)->next->next->index == 5))
		;
	else
		sortsmall(a);
	if ((*b)->index < (*b)->next->index)
		sb(*b);
	pa(a, b);
	pa(a, b);
}
