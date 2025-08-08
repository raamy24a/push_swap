/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 02:34:14 by radib             #+#    #+#             */
/*   Updated: 2025/08/08 17:58:30 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	create_array(t_list **a, int size, int i)
{
	int		*list;
	t_list	*temp;
	int		*s_l;

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
	if (!create_array(a, i, 0))
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

t_list	*list_creator_split(char *argv[], int i, long tempnbr, int x)
{
	t_list	*a;
	char	**number;

	a = malloc(sizeof(t_list));
	if (!a)
		return (NULL);
	node_ini(&a);
	while (argv[++i])
	{
		number = ft_split(argv[i], ' ');
		x = -1;
		while (number[++x])
		{
			if (i == 1 && x == 0)
				a->content = ft_atoi(number[x], 1, 0, 0);
			tempnbr = ft_atoi(number[x], 1, 0, 0);
			if (!ft_isdigit(number[x]) || tempnbr == -20000000000)
				return (0);
			if (!(i == 1 && x == 0))
				ft_lstadd_back(&a, tempnbr);
		}
	}
	if (tempnbr == -1 && i == 2 && x == 0 && a->content == 0)
		return (0);
	return (a);
}

int	main(int argc, char *argv[])
{
	t_list	*a;
	int		i;

	if (argc <= 1)
		return (0);
	a = list_creator_split(argv, 0, -1, 0);
	if (!a)
		return (ft_putstr_fd("Error\n", 2));
	i = array_len(a);
	if (array_test (&a, i, 0) == 0)
		return (0);
	if (checkduplicate(a, i, 0, 0) == 0)
		return (ft_putstr_fd("Error\n", 2));
	if (!chose_sort(&a, 1))
	{
		freelist(&a);
		return (ft_putstr_fd("Error\n", 2));
	}
	freelist(&a);
	return (0);
}
