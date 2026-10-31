/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoura <ztoura@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 19:21:24 by ztoura            #+#    #+#             */
/*   Updated: 2026/10/30 19:39:04 by ztoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*new_head;
	t_list	*tmp_p;
	t_list	*new_node;
	void	*new_content;

	if(!lst || !f || !del)
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
