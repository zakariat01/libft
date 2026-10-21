/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjon2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoura <ztoura@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 14:21:45 by ztoura            #+#    #+#             */
/*   Updated: 2026/10/21 16:41:04 by ztoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin2(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (NULL);
	size_t	full_length;
	char	*p;
	
	full_length = ft_strlen(s1) + ft_strlen(s2);
	p = malloc((full_length * sizeof(char)) + 1);
	if (p == NULL)
		return (NULL);
	ft_memcpy(p, s1, ft_strlen(s1));
	ft_memcpy(&p[ft_strlen(s1) +1], s2,ft_strlen(s2));
	return (p);
}

int main()
{
	char	*p;
	p = ft_strjoin2("hhhh", " zaka");
	if (p != NULL)
		printf ("%s", p);
	free(p);
}