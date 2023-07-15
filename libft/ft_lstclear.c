/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 01:44:21 by mahmoud           #+#    #+#             */
/*   Updated: 2023/07/13 14:55:16 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*next;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	node = *lst;
	while (node != NULL)
	{
		next = node->next;
		del(node->content);
		free(node);
		node = next;
	}
	*lst = NULL;
}

// void	del(void *data)
// {
// 	free(data);
// }

// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*node4;
// 	t_list	*current;

// 	// t_list *next;
// 	node1 = ft_lstnew(ft_strdup("A"));
// 	node2 = ft_lstnew(ft_strdup("B"));
// 	node3 = ft_lstnew(ft_strdup("C"));
// 	node4 = ft_lstnew(ft_strdup("D"));
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = node4;
// 	node4->next = NULL;
// 	current = node1;
// 	// printf("%c\n", *(char *)node4->content);
// 	ft_lstclear(&node2, del);
// 	node1->next = NULL;
// 	// printf("%c\n", *(char *)node3->content);
// 	while (current != NULL)
// 	{
// 		printf("%s\n", current->content);
// 		current = current->next;
// 	}
// 	printf("%s\t", node3->content);
// }
