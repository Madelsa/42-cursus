/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:12:38 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/12 12:05:29 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}

// void	del(void *data)
// {
// 	free(data);
// }

// int	main(void)
// {
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;
// 	t_list *node4;
// 	t_list *current;
// 	t_list *next;

// 	node1 = ft_lstnew(ft_strdup("A"));
// 	node2 = ft_lstnew(ft_strdup("B"));
// 	node3 = ft_lstnew(ft_strdup("C"));
// 	node4 = ft_lstnew(ft_strdup("D"));
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = node4;
// 	node4->next = NULL;
// 	current = node1;
// 	printf("%c\n", *(char *)node4->content);
// 	ft_lstdelone(node4, del);
// 	node3->next = NULL;
// 	printf("%c\n", *(char *)node3->content);
// 	while (current != NULL)
// 	{
// 		if (current->content == node2->content)
// 		{
// 			next = current->next;
// 			ft_lstdelone(current, del);
// 			current = next;
// 		}
// 		printf("%s\t", current->content);
// 		current = current->next;
// 	}
// }