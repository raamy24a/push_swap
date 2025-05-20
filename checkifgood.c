/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkifgood.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:03:40 by radib             #+#    #+#             */
/*   Updated: 2025/05/20 18:46:38 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotateorder(int i, int *l, t_list **a, t_list **b)
{
	while (l[i] != (*a)->content && l[i + 1] != (*a)->content)
		ra(a);
	if (l[i + 1] == (*a)->content)
	{
		pb(a, b);
		while (l[i] != (*a)->content)
			ra(a);
		pb(a, b);
		sb(*b);
		i++;
	}
	else
		pb(a, b);
	i++;
	return (i);
}

int	reverse_rotateorder(int i, int *l, t_list **a, t_list **b)
{
	while (l[i] != (*a)->content && l[i + 1] != (*a)->content)
		rra(a);
	if (l[i + 1] == (*a)->content)
	{
		pb(a, b);
		while (l[i] != (*a)->content)
			rra(a);
		pb(a, b);
		sb(*b);
		i++;
	}
	else
		pb(a, b);
	i++;
	return (i);
}

void	findorder(int size, int *l, t_list **a, t_list **b)
{
	int		i;
	int		j;
	t_list	*t;

	i = 0;
	while (i < size)
	{
		t = (*a);
		j = 0;
		while (j++ < size / 2 && t->content != l[i] && t->content != l[i + 1])
			t = t->next;
		if (t->content == l[i] || t->content == l[i + 1])
			i = rotateorder(i, l, a, b);
		else
			i = reverse_rotateorder(i, l, a, b);
	}
	while (i-- > -1)
		pa (a, b);
}

// demain a essayer c'est de separer la liste en morceaux de 5 ;) bonne chance a toi
