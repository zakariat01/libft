#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char * S1bytes;
    const unsigned char * S2bytes;
    size_t i;

    i = 0;
    S1bytes = s1;
    S2bytes = s2;

    while (i < n)
    {
        if (S1bytes[i] != S2bytes[i])
            return (S1bytes[i] - S2bytes[i]);
        i++;
    }
    return (0);
}
int main()
{
    unsigned char a[] = {10, 0, 30};
    unsigned char b[] = {10, 0, 40};
   printf ("%d", ft_memcmp(a, b, 3));
}