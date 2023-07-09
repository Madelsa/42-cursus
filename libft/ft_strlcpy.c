/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: a0ec6397 <a0ec6397@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2023/06/18 15:32:55 by a0ec6397          #+#    #+#             */
/*   Updated: 2023/06/18 15:32:55 by a0ec6397         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

// int	main(void)
// {
// 	char src[6] = "Hello";
// 	char dest[5];

// 	printf("%ld\n", ft_strlcpy(dest, src, sizeof(dest)));
// 	printf("%ld\n",strlcpy(dest, src, sizeof(dest)));
// 	printf("%s\n", dest);
// }
