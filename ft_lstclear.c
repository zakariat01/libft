/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoura <ztoura@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 23:56:41 by ztoura            #+#    #+#             */
/*   Updated: 2026/10/30 17:54:41 by ztoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;
	t_list	*q;

	if (!lst)
		return ;
	p = *lst;
	while (p)
	{
		q = p->next;
		del(p->content);
		free(p);
		p = q;
	}
	*lst = NULL;
}
