/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:22:43 by radib             #+#    #+#             */
/*   Updated: 2025/05/25 04:10:44 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	pb(a, b);
	sortsmall(a);
	if ((*a)->next->next->content < ((*b)->content))
	{
		pa(a, b);
		ra(a);
	}
	else if ((*a)->content > (*b)->content)
		pa(a, b);
	else
	{
		while (((*a)->content < (*b)->content))
			rra(a);
		rra(a);
		pa(a, b);
	}
	while ((*a)->next->next->next->content < ((*a)->content))
		rra(a);
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
	if (((*a)->index == 3 && (*a)->next ->index == 4))
		;
	else
		sortsmall(a);
	if ((*b)->index < (*b)->next->index)
		sb(*b);
	pa(a, b);
	pa(a, b);
}
