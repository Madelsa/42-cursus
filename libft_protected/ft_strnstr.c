/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:07:29 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/04 14:07:29 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	j;

	if (!str && !to_find)
		return (NULL);
	if (!*to_find)
		return ((char *)str);
	while (*str && len--)
	{
		j = 0;
		while (*(str + j) == *(to_find + j) && *(str + j) && j <= len)
		{
			if (*(to_find + j + 1) == '\0')
				return ((char *)str);
			j++;
		}
		str++;
	}
	return (NULL);
}
