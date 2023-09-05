/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 08:47:54 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/04 08:47:54 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	while (str && n--)
	{
		if (*(unsigned char *)str++ == (unsigned char)c)
			return ((unsigned char *)str - 1);
	}
	return (NULL);
}
