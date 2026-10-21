/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoura <ztoura@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:54:17 by ztoura            #+#    #+#             */
/*   Updated: 2026/10/19 16:55:18 by ztoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stddef.h>
// #include <stdio.h>
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*bytes;

	bytes = s;
	i = 0;
	while (i < n)
	{
		bytes[i] = c;
		i++;
	}
	return (s);
}

// int main()
// {
//     char str[8] = "zakaria";
//     int array[10] = {555,2,3,4,5,6,7,8,9};
//     ft_memset(str, 'x', 3);
//     ft_memset(array, 1, 1);
//     printf ("%s\n", str);
//     for (int i = 0; i < 8 ; i++)
//     {
//         printf(",");
//         printf ("%d", array[i]);
//     }   
// }
