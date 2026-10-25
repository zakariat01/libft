/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoura <ztoura@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:28:01 by ztoura            #+#    #+#             */
/*   Updated: 2026/10/24 13:08:06 by ztoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	length;

	start = 0;
	if (s1[start] == '\0')
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	length = (end - start) + 1;
	return (ft_substr(s1, start, length));
}

// int	main(void)
// {
// 	char	*p;

// 	p = ft_strtrim("xxhelloxx", "x");
// 	if (p == NULL)
// 	{
// 		printf("Allocation failed\n");
// 		return (0);
// 	}
// 	printf("Result: [%s]\n", p);
// 	free(p);
// 	return (0);
// }
