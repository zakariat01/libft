/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoura <ztoura@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:44:06 by ztoura            #+#    #+#             */
/*   Updated: 2026/10/27 14:44:25 by ztoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	to_upper(unsigned int i, char c)
// {
// 	(void) i;
// 	return(ft_toupper(c));
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	i = 0;
	p = malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (i < len)
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}

// int main()
// {
// 	char s[] = "zakaria";
// 	char *c;

// 	c = ft_strmapi(s, to_upper);
// 	if (c == NULL)
// 		return (1);
// 	printf ("%s", c);
// 	free (c);
// }