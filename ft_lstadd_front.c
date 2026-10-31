/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoura <ztoura@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 19:25:57 by ztoura            #+#    #+#             */
/*   Updated: 2026/10/29 19:26:37 by ztoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main()
// {
// 	int a = 1;
// 	int b = 2;
// 	int c = 3;
// 	int d = 4;
// 	int e = 5;
// 	t_list *node_a, *node_b, *node_c, *node_d, *node_e, *head;
// 	node_a = ft_lstnew(&a);
// 	node_b = ft_lstnew(&b);	
// 	node_c = ft_lstnew(&c);	
// 	node_d = ft_lstnew(&d);
// 	node_e = ft_lstnew(&e);
// 	head = node_a;
// 	if(!node_a || !node_b || !node_c || !node_d || !node_e)
// 		return (0);
// 	node_a->next = node_b;
// 	node_b->next = node_c;
// 	node_c->next = node_d;
// 	node_d->next = NULL;
// 	ft_lstadd_front(&head, node_e);

// 	t_list	*current;
// 	int		*value;

// 	current = head;
// 	while (current != NULL)
// 	{
// 		value = current->content;
// 		printf("%d ", *value);
// 		current = current->next;
// 	}
// 	printf("\n");
// }