/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:13:03 by radib             #+#    #+#             */
/*   Updated: 2025/08/08 18:07:22 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(const char *nptr, int sign, int total, int i)
{
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		total *= 10;
		total += nptr[i] - '0';
		if ((total * sign > 0) && sign == -1)
			return (-20000000000);
		if ((total < 0) && sign == 1)
			return (-20000000000);
		i++;
	}
	if (!(nptr[i]) && !(sign == -1 && total == 0 && i == 1))
		return ((long)(total * sign));
	return (-20000000000);
}

int	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	return (1);
}

int	ft_isdigit(char *argv)
{
	int	x;

	x = 0;
	while (argv[x])
	{
		if (!(argv[x] >= '0' && argv[x] <= '9') && !(argv[x] == '-'))
			return (0);
		else
			x++;
	}
	if (x == 0)
		return (0);
	return (1);
}

// int	main(int argc, char *argv[])
// {
// 	printf("monn atoi : %d\n", ft_atoi(argv[argc - 1]));
// }
