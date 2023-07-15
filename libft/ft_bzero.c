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
/*   Created: 2023/07/13 14:51:25 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/13 14:51:25 by mabdelsa         ###   ########.fr       */
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
// 	char i[] = {'a', 'b', 'c', 'd'};
// 	int j = 0;

// 	bzero(i, 2);
// 	j = 0;
// 	while (j < 4)
// 		printf("%c\n", i[j++]);
// }
