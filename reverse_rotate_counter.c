/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_counter.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:23:00 by radib             #+#    #+#             */
/*   Updated: 2025/05/23 19:10:08 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	srra(t_list **list, int mode)
{
	static int	i;
	int			temp;

	if (list == NULL && mode == 1)
	{
		temp = i;
		i = 0;
		return (temp);
	}
	i++;
	reverse_rotate(list);
	return (i);
}

int	srrb(t_list **list, int mode)
{
	static int	i;
	int			temp;

	if (list == NULL && mode == 1)
	{
		temp = i;
		i = 0;
		return (temp);
	}
	i++;
	reverse_rotate(list);
	return (i);
}

int	srrr(t_list **list1, t_list **list2, int mode)
{
	static int	i;
	int			temp;

	if (list1 == NULL && list2 == NULL && mode == 1)
	{
		temp = i;
		i = 0;
		return (temp);
	}
	i++;
	reverse_rotate(list1);
	reverse_rotate(list2);
	return (i);
}
