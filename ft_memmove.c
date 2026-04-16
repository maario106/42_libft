#include "libft.h"

#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *ptr_dest;
    const unsigned char *ptr_src;
    size_t i;

    ptr_dest = dest;
    ptr_src = (const unsigned char *) src;
    i = 0;
    while (i < n)
    {
        ptr_dest[i] = ptr_src[i];
        i++;
    }
    return (dest);
}

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *ptr_dest;
    const unsigned char *ptr_src;

    if (!dest || !src)
        return (0);
    ptr_dest = dest;
    ptr_src = src;
    if (ptr_dest < ptr_src)
        ft_memcpy(dest, src, n);
    else
        while (n > 0)
        {
            ptr_dest[n - 1] = ptr_src[n - 1];
            n--;
        }
    return (dest);
}

int main(int argc, char **argv)
{
    char csrc[100] = "Geeksfor"; 
    ft_memcpy(csrc+5, csrc, strlen(csrc)+1); 
    printf("%s", csrc); 
    return 0;
}
