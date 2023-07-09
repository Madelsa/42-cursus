/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 07:11:07 by mahmoud           #+#    #+#             */
/*   Updated: 2023/07/09 10:05:07 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub_str;
	size_t	len_s;

	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	if (len > len_s)
		len = len_s;
	sub_str = (char *)malloc((len + 1) * sizeof(char));
	if (sub_str == NULL)
		return (NULL);
	if (start > len)
	{
		sub_str[0] = '\0';
		return (sub_str);
	}
	i = 0;
	while (i < len)
		sub_str[i++] = s[start++];
	sub_str[i] = '\0';
	return (sub_str);
}

// int	main(void)
// {
// 	char			*str;
// 	unsigned int	start;
// 	size_t			len;

// 	str = "Hello";
// 	// start = 2;
// 	// len = 4;
// 	printf("MINE: %s\n", ft_substr(str, 1, 	1));
// 	printf("MINE: %s\n", ft_substr(str, 4000, 9));
// 	printf("MINE: %s\n", ft_substr(str, 0, 6));
// }
