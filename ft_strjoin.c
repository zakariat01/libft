/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoura <ztoura@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 14:21:45 by ztoura            #+#    #+#             */
/*   Updated: 2026/10/22 14:23:55 by ztoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	full_length;
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	full_length = ft_strlen(s1) + ft_strlen(s2);
	p = malloc((full_length * sizeof(char)) + 1);
	if (p == NULL)
		return (NULL);
	ft_memcpy(p, s1, ft_strlen(s1));
	ft_memcpy(&p[ft_strlen(s1)], s2, ft_strlen(s2) + 1);
	p[full_length] = '\0';
	return (p);
}

// int main()
// {
// 	char	*p;
// 	p = ft_strjoin("hhhh", " zaka");
// 	if (p != NULL)
// 		printf ("%s", p);
// 	free(p);
// }