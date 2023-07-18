/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fix.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:30:49 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/18 12:37:25 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *arr, size_t len)
{
	int				*int_arr;
	unsigned char	*byte_arr;
	size_t			i;
	size_t			num_ints;

	if (arr == NULL)
		return ;
	byte_arr = (unsigned char *)arr;
	i = 0;
	if (len % sizeof(int) == 0)
	{
		int_arr = (int *)arr;
		num_ints = len / sizeof(int);
		while (i < num_ints)
		{
			int_arr[i] = 0;
			i++;
		}
	}
	else
	{
		// Array is interpreted as null-terminated character array
		while (i < len)
		{
			byte_arr[i] = 0;
			i++;
		}
	}
}
