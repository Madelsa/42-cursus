/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:54:01 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/05 16:07:58 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	if (size != 0 && count > UINT_MAX / size)
		return (NULL);
	ptr = (unsigned char *)malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < count * size)
		ptr[i++] = 0;
	return (ptr);
}

// int	main(void)
// {
// 	/* 3 */ calloc(SIZE_MAX, SIZE_MAX);

// 	/* @evportel */
// 	/* The following tests are not supported by the function's documentation.
//  	* But some effects returned in the trait by Moulinette so the following
//   	* tests were implemented. */
// 	/* 4 */ calloc(INT_MAX, INT_MAX);
// 	/* 5 */ calloc(INT_MIN, INT_MIN);
// }