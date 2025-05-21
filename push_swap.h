/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 13:20:31 by radib             #+#    #+#             */
/*   Updated: 2025/05/21 14:43:48 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "printf/ft_printf.h"
# include <stddef.h>
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
	struct s_list	*previous;
}	t_list;
int		ft_printf(const char *format_str, ...);
void	pa(t_list **list_a, t_list **list_b);
void	pb(t_list **list_a, t_list **list_b);
void	rra(t_list **list);
void	rrb(t_list **list);
void	rrr(t_list **list1, t_list **list2);
void	ra(t_list **list);
void	rb(t_list **list);
void	rr(t_list **listb, t_list **lista);
void	sa(t_list *list_a);
void	sb(t_list *list_a);
void	ss(t_list *list_a, t_list *list_b);
int		spa(t_list **list_a, t_list **list_b);
int		spb(t_list **list_a, t_list **list_b);
int		srra(t_list **list);
int		srrb(t_list **list);
int		srrr(t_list **list1, t_list **list2);
int		sra(t_list **list);
int		sra(t_list **list);
int		srr(t_list **listb, t_list **lista);
int		ssa(t_list *list_a);
int		ssb(t_list *list_a);
int		sss(t_list *list_a, t_list *list_b);
int		ft_atoi(const char *nptr);
void	ft_lstadd_back(t_list **lst, int new);
void	findorder(int size, t_list **a, t_list **b);
int		*ft_sort_int_tab(int *tab, int size);
void	ft_lstadd_front(t_list **destination, t_list **source);
void	reverse_rotate(t_list **list);
void	rotate(t_list **list);
void	swap(t_list *list);
t_list	*list_creator(int argc, char*argv[]);
void	sortsmall(t_list **a);
void	sortsmedium(t_list **a, t_list **b);
void	list_indexor(t_list *a, int *s_l, int size);

#endif