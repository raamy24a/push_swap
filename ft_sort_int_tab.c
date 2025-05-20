/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:34:18 by radib             #+#    #+#             */
/*   Updated: 2025/05/20 12:59:12 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	compteur;

	temp = 0;
	compteur = 0;
	while (size > 1)
	{
		while (compteur < size - 1)
		{
			if (tab[compteur] > tab[compteur + 1])
			{
				temp = tab[compteur];
				tab[compteur] = tab[compteur + 1];
				tab[compteur + 1] = temp;
			}
			compteur++;
		}
		size--;
		compteur = 0;
	}
	return (tab);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int size;
// 	int i;
// 	size = 500;
// 	i = 0;
// 	int tab[] = {723, 1842, 56, 3991, 872, 5023, 142, 9184, 373, 2
// 	ft_sort_int_tab(tab, size);
// 	while (i < size)
// 	{
// 		printf("%d, ", tab[i]);
// 		i++;
// 	}
// }