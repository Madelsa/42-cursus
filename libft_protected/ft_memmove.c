/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:49:18 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/05 14:49:18 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t numBytes)
{
	unsigned char	*dest_ptr;

	if (dest == NULL || numBytes == 0 || src == NULL)
		return (0);
	dest_ptr = (unsigned char *)dest;
	if (dest == src)
		return (dest);
	if (dest < src)
	{
		while (numBytes--)
			*dest_ptr++ = *(unsigned char *)src++;
	}
	else
	{
		dest_ptr += numBytes;
		src += numBytes;
		while (numBytes--)
			*(--dest_ptr) = *(unsigned char *)(--src);
	}
	return (dest);
}
