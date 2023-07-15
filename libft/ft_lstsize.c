/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:26:20 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/13 16:21:30 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*node4;
// 	t_list	*current;
// 	int		size;

// 	node1 = ft_lstnew("A");
// 	node2 = ft_lstnew("B");
// 	node3 = ft_lstnew("C");
// 	node4 = ft_lstnew("D");
// 	current = node1;
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = node4;
// 	size = ft_lstsize(current);
// 	printf("%d", size);
// 	// while (current != NULL)
// 	// {
// 	// 	printf("content: %s\n", current->content);
// 	// 	current = current->next;
// 	// }
// }
