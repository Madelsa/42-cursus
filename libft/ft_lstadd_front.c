/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:58:17 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/10 15:22:12 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		new->next = NULL;
	}
	else
	{
		new->next = *lst;
		*lst = new;
	}
}

// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*current;

// 	node1 = ft_lstnew((void *)3);
// 	node2 = ft_lstnew((void *)2);
// 	node3 = ft_lstnew((void *)1);
// 	ft_lstadd_front(&node1, node2);
// 	ft_lstadd_front(&node1, node3);
// 	current = node1;
// 	while (current != NULL)
// 	{
// 		printf("%d ", (int)current->content);
// 		current = current->next;
// 	}
// 	printf("\n");
// }
