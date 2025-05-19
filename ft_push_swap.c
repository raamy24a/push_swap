/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 10:09:37 by radib             #+#    #+#             */
/*   Updated: 2025/05/19 18:28:07 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortbig(t_list **a, t_list **b)
{
	pa(a, b);
	pb(a, b);
}

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

void	chose_sort(t_list **a, int argc)
{
	t_list	**b;

	b = malloc(sizeof(t_list));
	if (argc == 4)
		sortsmall(a);
	else if (argc == 5)
		sortsmedium(a, b);
	else if (argc < 6)
		sortbig(a, b);
}

int	main(int argc, char *argv[])
{
	t_list	*a;
	t_list	*temp;
	int		i;
	int		tempnbr;

	a = malloc(sizeof(t_list));
	if (!a)
		return (0);
	a->content = ft_atoi(argv[1]);
	a->previous = NULL;
	a->next = NULL;
	i = 2;
	while (argv[i])
	{
		tempnbr = ft_atoi(argv[i]);
		ft_lstadd_back(&a, tempnbr);
		i++;
	}
	chose_sort(&a, argc);
	temp = a;
	i = 1;
	while (i < argc)
	{
		printf("%d\n", temp->content);
		temp = temp->next;
		i++;
	}
	return (0);
}
