/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 13:20:31 by radib             #+#    #+#             */
/*   Updated: 2025/05/19 18:51:15 by radib            ###   ########.fr       */
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
void	ra(t_list **list);
void	rr(t_list **listb, t_list **lista);
void	sa(t_list *list_a);
void	sb(t_list *list_a);
void	ss(t_list *list_a, t_list *list_b);
int		ft_atoi(const char *nptr);
void	ft_lstadd_back(t_list **lst, int new);

#endif