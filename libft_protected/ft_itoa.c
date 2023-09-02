/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 21:10:52 by mahmoud           #+#    #+#             */
/*   Updated: 2023/09/02 15:11:34 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_int_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	char	*start;
	long	n_casted;

	n_casted = n;
	len = get_int_len(n_casted);
	if (n_casted < 0)
	{
		len++;
		n_casted = -n_casted;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	start = str + len;
	*start = '\0';
	while (len--)
	{
		*--start = (n_casted % 10) + '0';
		n_casted /= 10;
	}
	if (n < 0)
		*(str + 0) = '-';
	return (start);
}
