/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:59:46 by radib             #+#    #+#             */
/*   Updated: 2025/08/08 15:44:11 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checkduplicate(t_list *a, int size, int x, int i)
{
	int		*list;
	t_list	*temp;

	temp = a;
	list = malloc(sizeof(int) * size);
	while (i++ < size)
	{
		list[i - 1] = temp->content;
		temp = temp->next;
	}
	i = 0;
	while (i < size)
	{
		x = i + 1;
		while (x < size)
		{
			if (x != i && list[i] == list[x])
				return (0);
			x++;
		}
		i++;
	}
	free(list);
	return (1);
}

int	array_len(t_list *a)
{
	int		i;
	t_list	*temp;

	i = 0;
	temp = a;
	while (temp->next)
	{
		temp = temp->next;
		i++;
	}
	return (i + 1);
}

int	array_test(t_list **a, int size, int i)
{
	int		*list;
	t_list	*temp;

	temp = (*a);
	list = malloc(sizeof(int) * size);
	while (i++ < size)
	{
		list[i - 1] = temp->content;
		temp = temp->next;
	}
	i = 0;
	while (i + 1 < size)
	{
		if (list[i] < list[i + 1])
			i++;
		else
			break ;
	}
	free(list);
	if (i + 1 != size)
		return (1);
	return (0);
}
