/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 09:21:15 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/04 09:21:15 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	if (str1 == NULL || str2 == NULL || n <= 0)
		return (0);
	i = 0;
	while (i < n - 1
		&& ((unsigned char *)str1)[i] == ((unsigned char *)str2)[i])
		i++;
	return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
}

int main(void)
{
	char s2[] = "31312312";
	char s1[] = "31312312";
	printf("%d", ft_memcmp(NULL, s2, 4));
}