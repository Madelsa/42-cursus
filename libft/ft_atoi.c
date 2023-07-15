/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 14:14:24 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/14 14:14:24 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	process_digits(const char *str, int sign)
{
	long	result;
	long	prev;

	result = 0;
	prev = 0;
	while (*str >= '0' && *str <= '9')
	{
		prev = result;
		result = result * 10 + *str++ - '0';
		if (prev > result)
		{
			if (sign < 0)
				return (0);
			else
				return (-1);
		}
	}
	return (result * sign);
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str == '0')
		str++;
	return (process_digits(str, sign));
}

// int	main(int ac, char *av[])
// {
// 	// char str[] = "922337203685477581308123031208";
// 	(void)ac;
// 	printf("ORIGINAL :%d\n", atoi(av[1]));
// 	printf("MINE: %d\n", ft_atoi(av[1]));
// }
