/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoura <ztoura@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 19:21:24 by ztoura            #+#    #+#             */
/*   Updated: 2026/11/02 00:19:43 by ztoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*tmp_p;
	t_list	*new_node;
	void	*new_content;

	if (!f || !del)
		return (NULL);
	new_head = NULL;
	tmp_p = lst;
	while (tmp_p)
	{
		new_content = f(tmp_p->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		ft_lstadd_back(&new_head, new_node);
		tmp_p = tmp_p->next;
	}
	return (new_head);
}
// void	*f(void *content)
// {
// 	int	*modify;

// 	modify = malloc(sizeof(int));
// 	if (!modify)
// 		return (NULL);
// 	*modify = *(int *)content * 2;
// 	return (modify);
// }

// void	delet(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	int		values[] = {1, 2, 3};
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*mapped;
// 	t_list	*p;

// 	node1 = ft_lstnew(&values[0]);
// 	node2 = ft_lstnew(&values[1]);
// 	node3 = ft_lstnew(&values[2]);
// 	if (!node1 || !node2 || !node3)
// 	{
// 		free(node1);
// 		free(node2);
// 		free(node3);
// 		return (1);
// 	}
// 	node1->next = node2;
// 	node2->next = node3;
// 	mapped = ft_lstmap(node1, f, delet);
// 	if (!mapped)
// 	{
// 		free(node1);
// 		free(node2);
// 		free(node3);
// 		return (1);
// 	}
// 	printf("Original: ");
// 	p = node1;
// 	while (p)
// 	{
// 		printf("%d ", *(int *)p->content);
// 		p = p->next;
// 	}
// 	printf("\nMapped:   ");
// 	p = mapped;
// 	while (p)
// 	{
// 		if (p->content)
// 			printf("%d ", *(int *)p->content);
// 		else
// 			printf("(NULL) ");
// 		p = p->next;
// 	}
// 	printf("\n");
// 	ft_lstclear(&mapped, delet);
// 	free(node1);
// 	free(node2);
// 	free(node3);
// 	return (0);
// }