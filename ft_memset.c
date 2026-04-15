#include "libft.h"

#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char block;
    int counter;
    char *ptr;

    block = c;
    counter = 0;
    ptr = s;
    while (counter < n)
    {
        ptr[counter] = block;
        counter++;
    }
    return (s);
}