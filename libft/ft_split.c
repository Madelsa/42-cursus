/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 05:34:40 by mahmoud           #+#    #+#             */
/*   Updated: 2023/07/04 13:35:16 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_num_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (count);
}

void	free_string(char **str, size_t str_index)
{
	while (str_index > 0)
		free(str[--str_index]);
	free(str);
}

void	split_and_copy(const char *s, char c, char **str)
{
	size_t	i;
	size_t	j;
	size_t	str_index;

	i = 0;
	str_index = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		j = 0;
		while (s[i + j] && s[i + j] != c)
			j++;
		if (j > 0)
		{
			str[str_index] = (char *)malloc(sizeof(char) * (j + 1));
			if (str[str_index] == NULL)
				return (free_string(str, str_index));
			ft_strlcpy(str[str_index], &s[i], j + 1);
			str_index++;
		}
		i += j;
	}
	str[str_index] = NULL;
}

char	**ft_split(const char *s, char c)
{
	size_t	count;
	char	**str;

	if (s == NULL)
		return (NULL);
	count = get_num_words(s, c);
	str = (char **)malloc(sizeof(char *) * (count + 1));
	if (str == NULL)
		return (NULL);
	split_and_copy(s, c, str);
	return (str);
}

// int	main(void)
// {
// 	char			*s;
// 	char			c;
// 	char			**strings;
// 	unsigned int	count;
// 	unsigned int	i;

// 	s = "0 0 0 0 0 0 0";
// 	c = ' ';
// 	count = get_num_words(s, c);
// 	i = 0;
// 	strings = ft_split(s, c);
// 	while (i < count)
// 	{
// 		printf("%s\n", strings[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while (i < count)
// 	{
// 		free(strings[i]);
// 		i++;
// 	}
// 	free(strings);
// }
