/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoura <ztoura@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:28:01 by ztoura            #+#    #+#             */
/*   Updated: 2026/10/23 16:33:01 by ztoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	allocated_space;
	size_t	i;
	char	*p;
	
	start = 0;
	if (s1[start] == '\0')
		return(ft_strdup(""));
	end = ft_strlen(s1) - 1;
	i = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	allocated_space = (end - start) + 2;
	p =  malloc(allocated_space * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (i < allocated_space - 1)
	{
		p[i] = s1[start + i];
		i++;
	}
	p[i] ='\0';
	return(p);
}

int	main(void)
{
	char	*p;

	p = ft_strtrim("", "xs");
	if (p == NULL)
	{
		printf("Allocation failed\n");
		return (0);
	}
	printf("Result: [%s]\n", p);
	free(p);
	return (0);
}