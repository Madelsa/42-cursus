/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/07/04 08:00:28 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/04 08:00:28 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)df
{
	int		sign;
	int		result;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		result = result * 10 + *str++ - '0';
	return (result * sign);
}
