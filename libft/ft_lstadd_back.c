/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:52:08 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/12 14:37:05 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	node = *lst;
	while (node->next != NULL)
		node = node->next;
	node->next = new;
}

// int	main(void)
// {
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;
// 	t_list *another_node1;
// 	t_list *another_node2;
// 	t_list *another_node3;
// 	t_list *current;

// 	node1 = ft_lstnew("A");
// 	node2 = ft_lstnew("B");
// 	node3 = ft_lstnew("C");
// 	another_node1 = ft_lstnew("D");
// 	another_node2 = ft_lstnew("E");
// 	another_node3 = ft_lstnew("F");

// 	another_node1->next = another_node2;
// 	another_node2->next = another_node3;

// 	ft_lstadd_back(&node1, node2); 
// 	ft_lstadd_back(&node1, node3);
// 	ft_lstadd_back(&node1, another_node1);
// 	current = node1;
// 	while (current != NULL)
// 	{
// 		printf("%s", current->content);
// 		current = current->next;
// 	}
// }