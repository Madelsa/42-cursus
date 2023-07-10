/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:07:58 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/10 09:55:00 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*current;
// 	t_list	*next;

// 	node1 = ft_lstnew(NULL);
// 	node2 = ft_lstnew("H");
// 	node3 = ft_lstnew("A");
// 	node1->next = node2;
// 	node2->next = node3;
// 	current = node1;
// 	while (current != NULL)
// 	{
// 		printf("current: %s\n", (char *)current->content);
// 		current = current->next;
// 	}
// 	current = node1;
// 	while (current != NULL)
// 	{
//         next = current->next;
//         free(current);
//         current = next;
// 	}
// }
