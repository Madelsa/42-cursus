/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:50:46 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/04 13:50:46 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*strcpy;
	char	*start;

	if (!src)
		return (NULL);
	strcpy = malloc(ft_strlen(src) + 1);
	if (!strcpy)
		return (NULL);
	start = strcpy;
	while (*src)
		*strcpy++ = *src++;
	*strcpy = '\0';
	return (start);
}
