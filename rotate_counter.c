/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_counter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:22:48 by radib             #+#    #+#             */
/*   Updated: 2025/05/20 17:35:32 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sra(t_list **list)
{
	rotate(list);
	return (1);
}

int	srb(t_list **list)
{
	rotate(list);
	return (1);
}

int	srr(t_list **listb, t_list **lista)
{
	rotate(listb);
	rotate(lista);
	return (1);
}
