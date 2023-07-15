/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:32:53 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/13 12:28:18 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void	f(void *content)
// {
// 	int	*c;

// 	if (content == NULL)
// 		return ;
// 	c = (int *)content;
// 	*c = *c + 1;
// }

// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*current;
// 	t_list	*func;

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
// 	current = node1;
// 	ft_lstiter(current, f);
// 	while (current != NULL)
// 	{
// 		printf("After: %d\t", *(int *)current->content);
// 		current = current->next;
// 	}
// }
