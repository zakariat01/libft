#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	int i;
	int count_words;

	i = 0;
	count_words = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if(s[i] != '\0' && s[i] != c)
			count_words++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (count_words);
}

char	**ft_split(char const *s, char c)
{
	char **words;
	size_t i;
	int j;
	int start;
	int end;
	size_t n_words;

	n_words = count_words(s, c);
	i = 0;
	j = 0;
	words = malloc((n_words + 1) * sizeof(char *) );
	if (words == NULL)
		return (NULL);
	while (i < n_words - 1)
	{
		while (s[j] != '\0' && s[j] == c)
			j++;
		start = j;
		while (s[j] != '\0' && s[j] != c)
			j++;
		end = j;
		words[i] = ft_substr(s, start, end - start);
		if (words[i] == NULL)
			return (NULL);
		i++;
	}
	words[n_words] = NULL;
	return (words);
}

int main()
{
	char **p = ft_split(",,hello,,zaka", ',');
	if (p == NULL)
	 return (0);
	printf ("%s", p[2]);
}