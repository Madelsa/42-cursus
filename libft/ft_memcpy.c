/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:45:05 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/04 10:45:05 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t numBytes)
{
	unsigned char	*dest_ptr;

	dest_ptr = (unsigned char *)dest;
	if (dest == NULL && src == NULL)
		return (dest);
	while (numBytes--)
		*dest_ptr++ = *(unsigned char *)src++;
	return (dest);
}
