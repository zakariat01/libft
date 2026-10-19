#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    unsigned char *dstbytes;
    const unsigned char *srcbytes;

    dstbytes = dst;
    srcbytes = src;
    i = 0;
    while(i < n)
    {
        dstbytes[i] = srcbytes[i];
        i++;
    }

    return (dst);
}

int main()
{
    unsigned char src[] = {65, 70, 66};
    unsigned char dst[] = {9, 9, 9};
    ft_memcpy(dst, src, 3);
    for(int i = 0; i < 3 ; i++)
    {
        printf ("%d,", dst[i]);
    }
}