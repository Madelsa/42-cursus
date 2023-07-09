/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 02:07:17 by mahmoud           #+#    #+#             */
/*   Updated: 2023/06/21 02:49:09 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*str;
	size_t	i;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char	increment(unsigned int index, char c)
// {
// 	return (c + index);
// }

// int	main(void)
// {
// 	const char	*input;
// 	char		*output;

// 	input = "Hello, world!";
// 	output = ft_strmapi(input, increment);
// 	if (output != NULL)
// 	{
// 		printf("Input: %s\n", input);
// 		printf("Output: %s\n", output);
// 		free(output); // Don't forget to free the allocated memory
// 	}
// 	return (0);
// }
