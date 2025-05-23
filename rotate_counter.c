/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_counter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:22:48 by radib             #+#    #+#             */
/*   Updated: 2025/05/23 16:31:39 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sra(t_list **list)
{
	static int	i;

	i++;
	rotate(list);
	return (i);
}

int	srb(t_list **list)
{
	static int	i;

	i++;
	rotate(list);
	return (i);
}

int	srr(t_list **listb, t_list **lista)
{
	static int	i;

	i++;
	rotate(listb);
	rotate(lista);
	return (i);
}
