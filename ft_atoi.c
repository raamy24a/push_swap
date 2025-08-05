/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:13:03 by radib             #+#    #+#             */
/*   Updated: 2025/08/05 11:54:06 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(const char *nptr)
{
	int		sign;
	int		total;

	total = 0;
	sign = 1;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == ' ')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		total *= 10;
		total += *nptr - '0';
		if ((total > 0) && sign == -1)
			return (-20000000000);
		if ((total < 0) && sign == 1)
			return (-20000000000);
		nptr++;
	}
	return ((long)(total * sign));
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
		if (!(argv[x] >= '0' && argv[x] <= '9'))
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
