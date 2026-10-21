/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoura <ztoura@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 14:21:45 by ztoura            #+#    #+#             */
/*   Updated: 2026/10/21 15:50:20 by ztoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (NULL);
	size_t	full_length;
	size_t	i;
	size_t	j;
	char	*p;
	
	full_length = ft_strlen(s1) + ft_strlen(s2);
	p = malloc((full_length * sizeof(char)) + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	j = 0;
	while (i + j < full_length)
	{
		p[i + j] = s2[j];
		j++;
	}
	p[i + j] = '\0';
	return (p);
}

int main()
{
	char	*p;
	p = ft_strjoin(NULL, " zaka");
	if (p != NULL)
		printf ("%s", p);
	free(p);
}