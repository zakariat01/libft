/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoura <ztoura@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:34:53 by ztoura            #+#    #+#             */
/*   Updated: 2026/10/19 16:48:05 by ztoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1bytes;
	const unsigned char	*s2bytes;
	size_t				i;

	i = 0;
	s1bytes = s1;
	s2bytes = s2;
	while (i < n)
	{
		if (s1bytes[i] != s2bytes[i])
			return (s1bytes[i] - s2bytes[i]);
		i++;
	}
	return (0);
}
// int main()
// {
// 	unsigned char a[] = {10, 0, 30};
// 	unsigned char b[] = {10, 0, 40};
//    printf ("%d", ft_memcmp(a, b, 3));
// }