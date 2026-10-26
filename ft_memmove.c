/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoura <ztoura@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:52:15 by ztoura            #+#    #+#             */
/*   Updated: 2026/10/26 19:47:16 by ztoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*dstbytes;
	const unsigned char	*srcbytes;
	size_t				i;

	dstbytes = dst;
	srcbytes = src;
	if (dstbytes > srcbytes)
	{
		i = n;
		while (i != 0)
		{
			i--;
			dstbytes[i] = srcbytes[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dstbytes[i] = srcbytes[i];
			i ++;
		}
	}
	return (dst);
}
// int main() 
// {
// 	char str[] = "abcdef";
// 	ft_memmove(str, str + 4, 3);
// 	printf ("%s", str);
// }