/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:40:45 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/10 15:24:46 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*last_element;

// 	node1 = ft_lstnew("A");
// 	node2 = ft_lstnew("B");
// 	node3 = ft_lstnew("C");
// 	ft_lstadd_front(&node1, node2);
// 	ft_lstadd_front(&node1, node3);
// 	last_element = ft_lstlast(node1);
// 	printf("%s", (char *)last_element->content);
// }
