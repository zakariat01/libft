/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoura <ztoura@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:32:53 by ztoura            #+#    #+#             */
/*   Updated: 2026/10/20 16:24:11 by ztoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*bytes;
	size_t			i;

	bytes = s;
	i = 0;
	while (i < n)
	{
		bytes[i] = '\0';
		i++;
	}
}

// int main()
// {
// 	char str[] = "zakaria";
// 	ft_bzero(str, 3);
// 	printf("%s", str + 2);
// }
