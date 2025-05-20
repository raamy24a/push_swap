/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 10:09:37 by radib             #+#    #+#             */
/*   Updated: 2025/05/20 15:47:14 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_array(t_list **a, t_list **b, int size)
{
	int		*list;
	t_list	*temp;
	int		i;

	i = 0;
	temp = (*a);
	list = malloc(sizeof(int) * size);
	while (i++ < size)
	{
		list[i - 1] = temp->content;
		temp = temp->next;
	}
	ft_sort_int_tab(list, size);
	findorder(size, list, a, b);
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

void	chose_sort(t_list **a)
{
	t_list	**b;
	t_list	*temp;
	int		i;

	i = 1;
	temp = (*a);
	while (temp->next)
	{
		temp = temp->next;
		i++;
	}
	b = malloc(sizeof(t_list));
	if (i == 3)
		sortsmall(a);
	else if (i == 4)
		sortsmedium(a, b);
	else if (i > 4)
		create_array(a, b, i);
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
	a->content = ft_atoi(argv[argc - argc + 1]);
	a->previous = NULL;
	a->next = NULL;
	i = 2;
	while (argv[i])
	{
		tempnbr = ft_atoi(argv[i]);
		ft_lstadd_back(&a, tempnbr);
		i++;
	}
	chose_sort(&a);
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
