/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 21:10:52 by mahmoud           #+#    #+#             */
/*   Updated: 2023/07/05 16:35:02 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

size_t	get_int_len(int n)
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

void	convert_int_to_str(char *str, unsigned int n_casted, size_t len,
		int is_negative)
{
	str[len + is_negative] = '\0';
	while (len > 0)
	{
		str[len - 1 + is_negative] = (n_casted % 10) + '0';
		n_casted /= 10;
		len--;
	}
	if (is_negative)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	n_casted;
	int				is_negative;

	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		n_casted = (unsigned int)(-n);
	}
	else
		n_casted = (unsigned int)n;
	len = get_int_len(n_casted);
	str = (char *)malloc(sizeof(char) * (len + 1 + is_negative));
	if (str == NULL)
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	convert_int_to_str(str, n_casted, len, is_negative);
	return (str);
}
