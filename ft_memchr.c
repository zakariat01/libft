/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoura <ztoura@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:41:49 by ztoura            #+#    #+#             */
/*   Updated: 2026/10/19 16:44:51 by ztoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*bytes;
	size_t				i;

	bytes = s;
	i = 0;
	while (i < n)
	{
		if (bytes[i] == ((unsigned char)c))
			return ((char *)&bytes[i]);
		i++;
	}
	return (0);
}

// int main()
// {
// 	int number = 2658;
//     const int * data = &number;
//     char *p = ft_memchr(data, 98, 4);
//     printf("%d", *p);
// }