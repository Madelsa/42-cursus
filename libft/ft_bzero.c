/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/07/04 07:38:55 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/04 07:38:55 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t len)
{
	while (len--)
		*(unsigned char *)str++ = 0;
}
// int	main(void)
// {
// 	char str[] = "Hello, World!";

// 	printf("Before ft_bzero: %s\n", str);

// 	bzero(str, 30);

// 	printf("After ft_bzero: %s\n", str);
// 	size_t i = 0;
// 	while (str[i] != '\0')
// 	{
// 		printf("%c", str[i++]);
// 	}
// 	printf("\n");
// 	return (0);
// }
