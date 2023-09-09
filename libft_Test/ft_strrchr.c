/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:10:42 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/04 14:10:42 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*s;

	if (!str)
		return (NULL);
	s = NULL;
	while (*str)
	{
		if (*str == (char)c)
			s = (char *)str;
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	return ((char *) s);
}
