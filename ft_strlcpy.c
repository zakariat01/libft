#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t SrcSize;

	i = 0;
	SrcSize = 0;

	while (src[SrcSize] != '\0')
		SrcSize++;
	
	if (dstsize == 0)
		return (SrcSize);
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (SrcSize);
}

int main()
{
	char dst[1];
	ft_strlcpy(dst, "hello", sizeof(dst));
	printf("%s", dst);
}