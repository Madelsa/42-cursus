/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 01:44:21 by mahmoud           #+#    #+#             */
/*   Updated: 2023/07/15 17:42:38 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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
// 	char	a;

// 	a = 'a';
// 	node1 = ft_lstnew(ft_strdup(&a));
// 	node2 = ft_lstnew(ft_strdup("B"));
// 	node3 = ft_lstnew(ft_strdup("C"));
// 	node4 = ft_lstnew(ft_strdup("D"));
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = node4;
// 	node4->next = NULL;
// 	printf("%c\n", *(char *)node1->content);
// 	printf("%c\n", *(char *)node2->content);
// 	printf("%c\n", *(char *)node3->content);
// 	printf("%c\n", *(char *)node4->content);
// 	ft_lstclear(&node1, del);
// 	//Attempting to access the nodes after freeing will cause a SEGFAULT
// }
