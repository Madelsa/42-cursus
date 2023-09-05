/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:42:26 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/04 13:42:26 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (str)
	{
		while (*str)
		{
			if (*str == (char)c)
				return ((char *)str);
			str++;
		}
		if (*str == (char)c)
			return ((char *)str);
	}
	return (NULL);
}
