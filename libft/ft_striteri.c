/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 02:38:47 by mahmoud           #+#    #+#             */
/*   Updated: 2023/06/21 03:04:12 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void	increment(unsigned int index, char *c)
// {
// 	*c += index;
// }

// int main(void)
// {
//     char input[] = "Hello, world!";

//     printf("Input: %s\n", input);
//     ft_striteri(input, increment);
//     printf("Input: %s\n", input);

//     return (0);
// }