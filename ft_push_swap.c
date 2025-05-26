/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 02:34:14 by radib             #+#    #+#             */
/*   Updated: 2025/05/26 18:05:48 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	create_array(t_list **a, t_list **b, int size)
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
	if (!checkduplicate(s_l))
	{
		free(list);
		return (0);
	}
	list_indexor((*a), s_l, size);
	if (size == 5)
		sortfive(a, b);
	else
		findorder(size, a, b);
	free(list);
	return (1);
}

int	chose_sort(t_list **a)
{
	t_list	*b;
	t_list	*temp;
	int		i;

	i = 1;
	temp = (*a);
	while (temp->next)
	{
		temp = temp->next;
		i++;
	}
	b = NULL;
	if (i == 3)
		sortsmall(a);
	else if (i == 4)
		sortsmedium(a, &b);
	else if (i > 4)
		if (!create_array(a, &b, i))
			return (freelist(&b));
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
	int		tempnbr;

	a = malloc(sizeof(t_list));
	if (!a)
		return (NULL);
	a->content = ft_atoi(argv[argc - argc + 1]);
	a->previous = NULL;
	a->next = NULL;
	a->index = -1;
	i = 2;
	while (argv[i])
	{
		tempnbr = ft_atoi(argv[i]);
		ft_lstadd_back(&a, tempnbr);
		i++;
	}
	return (a);
}

int	main(int argc, char *argv[])
{
	t_list	*a;

	if (argc <= 1)
		return (0);
	a = list_creator(argc, argv);
	if (!chose_sort(&a))
	{
		freelist(&a);
		return (ft_printf("%s\n", "Error"));
	}
	freelist(&a);
	return (0);
}
