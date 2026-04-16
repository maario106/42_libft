#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *ptr_dest;
    unsigned char * ptr_src;
    size_t i;

    if (!dest && !src)
        return (NULL);
    ptr_dest = dest;
    ptr_src = src;
    i = 0;
    while(i < n)
    {
        ptr_dest[i] = ptr_src[i];
        i++;
    }
}