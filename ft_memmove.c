#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char *dstBytes;
	const unsigned char *srcBytes;
	
	size_t i;

	dstBytes = dst;
	srcBytes = src;
	
	if (dstBytes > srcBytes)
	{
		i = n;
		while (i != 0)
		{
			i--;
			dstBytes[i] = srcBytes[i];
		}
	}
	else 
	{
		i = 0;
		while (i < n)
		{
			dstBytes[i] = srcBytes[i];
			i ++;
		}
	}  
	return (dst);
}
int main() 
{
	char str[] = "abcdef";
	ft_memmove(str, str + 4, 3);
	printf ("%s", str);
}