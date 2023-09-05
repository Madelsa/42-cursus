/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a0ec6397 <a0ec6397@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 07:11:07 by mahmoud           #+#    #+#             */
/*   Updated: 2023/09/05 20:23:33 by a0ec6397         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*begin;
	char	*sub_str;
	size_t	len_s;

	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	sub_str = (char *)malloc(sizeof(char) * (len + 1));
	if (sub_str == NULL)
		return (NULL);
	begin = sub_str;
	s += start;
	while (len--)
		*sub_str++ = *s++;
	*sub_str = '\0';
	return (begin);
}

