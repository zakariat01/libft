#include "libft.h"

char	to_upper(unsigned int i, char c)
{
	(void) i;
	return(ft_toupper(c));
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *p;
	int i;

	i = 0;
	p = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	while ()
	{
		
	}
}
int main()
{

}