/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoura <ztoura@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:59:39 by ztoura            #+#    #+#             */
/*   Updated: 2026/10/20 18:20:10 by ztoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*p;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	if (count == 0 || size == 0)
	{
		p = malloc(1);
		return (p);
	}
	p = malloc(count * size);
	if (p == NULL)
		return (0);
	ft_bzero(p, count * size);
	return (p);
}

// int main()
// {
// 	char *n = ft_calloc(5, sizeof(int));
// 	printf ("%d", n[0]);
// 	free(n);
// }