/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:56:53 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/04 13:56:53 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	dest_len = 0;
	src_len = 0;
	i = 0;
	if (dest == NULL && size == 0)
		return (src_len);
	while (src[src_len] != '\0')
		src_len++;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	if (size <= dest_len)
		return (src_len + size);
	if (size == 0)
		return (src_len);
	while (dest_len + i < size - 1 && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

// int	main(void)
// {
// 	char destination[10] = "Hello";
// 	const char *source = ", world!";
// 	printf("%ld\n", ft_strlcat(destination, source, 7));
// 	printf("%s", destination);
// }