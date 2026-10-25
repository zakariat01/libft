/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoura <ztoura@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 14:24:52 by ztoura            #+#    #+#             */
/*   Updated: 2026/10/24 15:51:34 by ztoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digit(int n)
{
	int		count;
	long	ln;

	if (n == 0)
		return (1);
	ln = n;
	count = 0;
	if (ln < 0)
	{
		ln *= -1;
		count++;
	}
	while (ln != 0)
	{
		ln /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		i;
	long	ln;

	ln = n;
	i = count_digit(n);
	p = malloc((count_digit(n) * sizeof(char)) + 1);
	if (p == NULL)
		return (NULL);
	if (ln == 0)
		p[0] = '0';
	if (ln < 0)
	{
		ln *= -1;
		p[0] = '-';
	}
	p[i] = '\0';
	while (ln != 0)
	{
		i--;
		p[i] = (ln % 10) + '0';
		ln /= 10;
	}
	return (p);
}

// int main()
// {
// 	char *p;
// 	p = ft_itoa(-2);
// 	if (p == NULL)
// 		return (0);
// 	printf("%s", p);
// 	free (p);
// }