/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoura <ztoura@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 21:45:39 by ztoura            #+#    #+#             */
/*   Updated: 2026/10/28 19:06:05 by ztoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	cnt;
	t_list			*p;

	if (!lst)
		return (0);
	cnt = 1;
	p = lst->next;
	while (p != NULL)
	{
		p = p->next;
		cnt++;
	}
	return (cnt);
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
// 	t_list	*head, *taill;
// 	head = node1;
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;
// 	taill = node3;
// 	printf("%d\n", ft_lstsize(node1));
// }