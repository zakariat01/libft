/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoura <ztoura@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 20:01:30 by ztoura            #+#    #+#             */
/*   Updated: 2026/10/28 21:21:16 by ztoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*p;

	if (!lst)
		return (NULL);
	if (lst->next == NULL)
		return (lst);
	p = lst->next;
	while (p->next != NULL)
		p = p->next;
	return (p);
}

// int main()
// {
// 	t_list *node1 = ft_lstnew("hello");
// 	if (!node1)
// 		return (0);
// 	t_list *node2 = ft_lstnew("zakaria");
// 	if (!node2)
// 		return (0);
// 	t_list *node3 = ft_lstnew("toura");
// 	if (!node3)
// 		return (0);
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;
// 	t_list *p = ft_lstlast(node1);
// 	printf("%s",(char *) p->content);
// }