/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 13:18:25 by radib             #+#    #+#             */
/*   Updated: 2025/05/15 14:26:41 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list *list)
{
	int	temp;

	temp = list -> content;
	list -> content = list -> next -> content;
	list -> next -> content = temp;
}

void	sa(t_list *list_a)
{
	if (list_a -> next == NULL || !list_a)
		swap(list_a);
	printf("%s\n", sa);
}

void	sb(t_list *list_b)
{
	if (list_b -> next == NULL || !list_b)
		swap(list_b);
	printf("%s\n", sb);
}

void	ss(t_list *list_a, t_list *list_b)
{
	sa (list_a);
	sb (list_b);
	printf("%s\n", ss);
}