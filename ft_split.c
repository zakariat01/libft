/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoura <ztoura@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:52:43 by ztoura            #+#    #+#             */
/*   Updated: 2026/10/26 12:17:04 by ztoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	int	i;
	int	count_words;

	i = 0;
	count_words = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
			count_words++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (count_words);
}

static char	**free_words(char **words, size_t i)
{
	while (i > 0)
	{
		i--;
		free(words[i]);
	}
	free(words);
	return (NULL);
}

static char	**fill_words(char **words, char const *s, char c, size_t n_words)
{
	size_t	i;
	int		j;
	int		start;
	int		end;

	i = 0;
	j = 0;
	while (i < n_words)
	{
		while (s[j] != '\0' && s[j] == c)
			j++;
		start = j;
		while (s[j] != '\0' && s[j] != c)
			j++;
		end = j;
		words[i] = ft_substr(s, start, end - start);
		if (words[i] == NULL)
			return (free_words(words, i));
		i++;
	}
	words[n_words] = NULL;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	n_words;

	n_words = count_words(s, c);
	words = malloc((n_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	return (fill_words(words, s, c, n_words));
}

// int main()
// {
// 	char c = ',';
// 	char *s = ",,hello,,zaka,,ria ";
// 	char **p = ft_split(s, c);
// 	int n_words = count_words(s, c);
// 	if (p == NULL)
// 	 return (0);
// 	for (int i = 0; i < n_words; i++)
// 	{
// 		printf("%s	", p[i]);
// 		free(p[i]);
// 	}
// 	free(p);
// }