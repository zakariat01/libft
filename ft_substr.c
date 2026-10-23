/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoura <ztoura@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 18:21:56 by ztoura            #+#    #+#             */
/*   Updated: 2026/10/22 14:24:19 by ztoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	selected_letters;

	if (start > ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	selected_letters = ft_strlen(s) - start;
	if (selected_letters > len)
		selected_letters = len;
	p = malloc(selected_letters + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

// int main()
// {
// 	char *p = ft_substr("zakaria", 3, 3);
// 	printf("%s", p);
// 	free(p);
// }