#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
    size_t i;
    unsigned char *bytes;

    bytes = s;
    i = 0;
    while (i < n)
    {
        bytes[i] = '\0';
        i++;
    }
}

int main()
{
    char str[] = "zakaria";
    ft_bzero(str, 3);
    printf("%s", str + 2);
}
