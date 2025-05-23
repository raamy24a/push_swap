/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_counter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:22:48 by radib             #+#    #+#             */
/*   Updated: 2025/05/23 19:10:16 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sra(t_list **list, int mode)
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
	rotate(list);
	return (i);
}

int	srb(t_list **list, int mode)
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
	rotate(list);
	return (i);
}

int	srr(t_list **listb, t_list **lista, int mode)
{
	static int	i;
	int			temp;

	if (listb == NULL && lista == NULL && mode == 1)
	{
		temp = i;
		i = 0;
		return (temp);
	}
	i++;
	rotate(listb);
	rotate(lista);
	return (i);
}
