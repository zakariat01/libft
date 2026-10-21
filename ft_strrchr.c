/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoura <ztoura@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:43:35 by ztoura            #+#    #+#             */
/*   Updated: 2026/10/20 14:07:42 by ztoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*add;

	add = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			add = (char *)&s[i];
		}
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	else if (add != 0)
		return (add);
	else
		return (0);
}
