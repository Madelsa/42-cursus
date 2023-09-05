/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 07:11:07 by mahmoud           #+#    #+#             */
/*   Updated: 2023/09/05 14:38:35 by mabdelsa         ###   ########.fr       */
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
	if (start >= len_s) //1
		return (ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	sub_str = (char *)malloc((len + 1) * sizeof(char)); //2
	if (sub_str == NULL)
		return (NULL);
	begin = sub_str;
	while (len--)
		*sub_str++ = *(s + start++); //3
	*sub_str = '\0';
	return (begin);
}
