#include <stdio.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *bytes;
    size_t i;

    bytes = s;
    i = 0;
    while (i < n)
    {
        if (bytes[i] == ((unsigned char)c))
            return ((char *)&bytes[i]);
        i++;
    }
    return (0);
}

int main()
{
    unsigned char data[] = {1,2,3};
    char *p = ft_memchr(data, 2, 3);
    printf("%d", *p);
}