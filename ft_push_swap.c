/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 10:09:37 by radib             #+#    #+#             */
/*   Updated: 2025/05/19 15:03:35 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortsmall(t_list **a)
{
	if ((*a)->content > (*a)->next->content
		&& (*a)->next->content > (*a)->next->next->content)
		ra(a);
	else if ((*a)->content > (*a)->next->content)
		sa((*a));
}

int	main(int argc, char *argv[])
{
	t_list	*a;
	// t_list	*b;

	a = malloc(sizeof(t_list));
	// b = NULL;
	if (!a)
		return (0);
	a->content = ft_atoi(argv[argc + 1]);
	a->previous = NULL;
	a->next = NULL;
	while (argv[argc + 2])
	{
		ft_lstadd_back(&a, ft_atoi(argv[argc + 2]));
		argc++;
	}
}
