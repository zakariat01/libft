/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoura <ztoura@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:55:37 by ztoura            #+#    #+#             */
/*   Updated: 2026/10/19 18:18:03 by ztoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_l;
	size_t	src_l;
	size_t	i;

	i = 0;
	dst_l = 0;
	src_l = 0;
	while (dst_l < dstsize && dst[dst_l] != '\0')
		dst_l++;
	while (src[src_l] != '\0')
		src_l++;
	if (dst_l < dstsize)
	{
		while (src[i] != '\0' && i < dstsize - dst_l - 1)
		{
			dst[dst_l + i] = src[i];
			i++;
		}
		dst[dst_l + i] = '\0';
	}
	return (dst_l + src_l);
}

// int main()
// {
//     char dst[5] = "hi ";
//     ft_strlcat(dst, "zakaria", sizeof(dst));
//     printf("%s", dst);
// }