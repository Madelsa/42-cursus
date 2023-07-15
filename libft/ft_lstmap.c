/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:39:14 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/15 14:54:00 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*clear_list(t_list *lst, void (*del)(void *))
{
	ft_lstclear(&lst, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*new_node;
	t_list	*current;
	void	*function_applied;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	node = NULL;
	current = lst;
	while (current != NULL)
	{
		function_applied = f(current->content);
		if (f(current->content) == NULL)
			return (clear_list(node, del));
		new_node = ft_lstnew(function_applied);
		if (new_node == NULL)
		{
			del(function_applied);
			return (clear_list(node, del));
		}
		ft_lstadd_back(&node, new_node);
		current = current->next;
	}
	return (node);
}

// void	*f(void *content)
// {
// 	int	*c;

// 	if (content == NULL)
// 		return (NULL);
// 	c = (int *)content;
// 	*c = *c + 1;
// 	return (c);
// }

// void	del(void *data)
// {
// 	free(data);
// }

// int	main(void)
// {
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;
// 	t_list *current;
// 	t_list *func;
// 	t_list *result;

// 	int i, j, k;
// 	i = 1;
// 	j = 2;
// 	k = 3;
// 	node1 = ft_lstnew(&i);
// 	node2 = ft_lstnew(&j);
// 	node3 = ft_lstnew(&k);
// 	current = node1;
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;
// 	while (current != NULL)
// 	{
// 		printf("Before: %d\t", *(int *)current->content);
// 		current = current->next;
// 	}
// 	result = ft_lstmap(node1, f, del);
// 	current = result;
// 	while (current != NULL)
// 	{
// 		printf("After: %d\t", *(int *)current->content);
// 		current = current->next;
// 	}
// }