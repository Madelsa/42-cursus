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
	while (n && *(unsigned char *)str1++ == *(unsigned char *)str2++)
		n--;
	if (n > 0)
		return (*((unsigned char *)str1 - 1) - *((unsigned char *)str2 - 1));
	return (0);
}
