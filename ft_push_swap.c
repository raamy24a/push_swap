/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 02:34:14 by radib             #+#    #+#             */
/*   Updated: 2025/08/05 15:08:44 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	create_array(t_list **a, int size)
{
	int		*list;
	t_list	*temp;
	int		i;
	int		*s_l;

	i = 0;
	temp = (*a);
	list = malloc(sizeof(int) * size);
	while (i++ < size)
	{
		list[i - 1] = temp->content;
		temp = temp->next;
	}
	s_l = ft_sort_int_tab(list, size);
	if (!s_l)
		return (2);
	if (!checkduplicate(s_l, size))
	{
		free(list);
		return (0);
	}
	list_indexor((*a), s_l, size);
	free(list);
	return (1);
}

int	chose_sort(t_list **a, int i)
{
	t_list	*b;
	t_list	*temp;

	temp = (*a);
	while (temp->next)
	{
		temp = temp->next;
		i++;
	}
	b = NULL;
	if (!create_array(a, i))
		return (freelist(&b));
	if (i == 1 || i == 2)
		sort_twoo_and_one(a, i);
	else if (i == 3)
		sortsmall(a);
	else if (i == 4)
		sortsmedium(a, &b);
	else if (i == 5)
		sortfive(a, &b);
	else
		findorder(i, a, &b);
	freelist(&b);
	return (1);
}

void	list_indexor(t_list *a, int *s_l, int size)
{
	t_list	*temp;
	int		i;

	temp = a;
	while (temp)
	{
		i = 0;
		while (i < size)
		{
			if (temp->content == s_l[i])
			{
				temp->index = i;
				break ;
			}
			i++;
		}
		temp = temp->next;
	}
}

t_list	*list_creator(int argc, char*argv[])
{
	t_list	*a;
	int		i;
	long	tempnbr;

	a = malloc(sizeof(t_list));
	if (!a)
		return (NULL);
	a->content = ft_atoi(argv[argc - argc + 1]);
	a->previous = NULL;
	a->next = NULL;
	a->index = -1;
	if (!ft_isdigit(argv[1]) || ft_atoi(argv[1]) == -20000000000)
		return (0);
	i = 2;
	while (argv[i])
	{
		if (!ft_isdigit(argv[i]))
			return (0);
		tempnbr = ft_atoi(argv[i]);
		if (tempnbr == -20000000000)
			return (0);
		ft_lstadd_back(&a, tempnbr);
		i++;
	}
	return (a);
}

int	main(int argc, char *argv[])
{
	t_list	*a;
	t_list	*temp;

	if (argc <= 1)
		return (0);
	a = list_creator(argc, argv);
	temp = a;
	if (!a)
		return (ft_putstr_fd("Error\n", 2));
	while (temp->next->next)
	{
		if (temp < temp->next)
			break ;
		temp = temp->next;
	}
	if (!temp->next->next)
		return (0);
	if (!chose_sort(&a, 1))
	{
		freelist(&a);
		return (ft_putstr_fd("Error\n", 2));
	}
	freelist(&a);
	return (0);
}
