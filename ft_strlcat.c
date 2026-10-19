#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t dstlenght;
    size_t srclenght;
    int i;
    int rest;

    dstlenght = 0;
    srclenght = 0;
    i = 0;
    while (dst[dstlenght] != '\0')
        dstlenght++;
    while (src[srclenght] != '\0')
        srclenght++;
    rest = dstsize - dstlenght;
    while(src[i] != '\0' && i < rest - 1)
    {
        dst[i + dstlenght] = src[i];
        i++;
    }
    dst[i + dstlenght] = '\0';
    return (dstlenght + srclenght);
}

int main()
{
    char dst[10] = "hi ";
    ft_strlcat(dst, "zakaria", sizeof(dst));
    printf("%s", dst);
}