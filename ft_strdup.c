/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoura <ztoura@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:59:02 by ztoura            #+#    #+#             */
/*   Updated: 2026/10/20 15:58:42 by ztoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	size_t	i;
	char	*p;

	size = ft_strlen(s) + 1;
	p = malloc(size * sizeof(char));
	if (p == NULL)
		return (0);
	i = 0;
	while (i < size - 1)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

// int main()
// {
// 		printf ("%s", ft_strdup("zakaria"));
//		free(p);
// }