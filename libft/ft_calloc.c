/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:54:01 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/15 14:47:50 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

// int main(void)
// {
// 	char *ptr;
// 	size_t i;
// 	size_t j;
// 	size_t k;
	
// 	i = 429496729522321321;
// 	j = 4294967292253213213;
// 	k = i * j;
// 	// ptr = ft_calloc(UINT_MAX, UINT_MAX);
// 	printf("%ld\n", k);
// 	printf("%u\n", UINT_MAX * UINT_MAX);
// }