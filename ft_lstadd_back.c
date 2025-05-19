/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 10:32:49 by radib             #+#    #+#             */
/*   Updated: 2025/05/19 16:03:39 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	size_t	i;
	t_list	*last;

	i = 0;
	last = lst;
	if (last == NULL)
		return (NULL);
	while (last -> next)
	{
		last = last -> next;
		i++;
	}
	return (last);
}

void	ft_lstadd_back(t_list **lst, int new)
{
	t_list	*temp;
	t_list	*temp_list;

	if (!lst)
		return ;
	temp = ft_lstlast(*lst);
	if (!temp)
	{
		(*lst)-> content = new;
		temp -> previous = (*lst);
		return ;
	}
	temp_list = malloc(sizeof(t_list));
	temp -> next = temp_list;
	temp -> next->content = new;
	temp_list ->previous = temp;
}
