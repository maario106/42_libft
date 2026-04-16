#include "libft.h"

#include <stdio.h>

size_t ft_strlen(const char *s)
{
    size_t counter;

    counter = 0;
    while(s[counter] != '\0')
        counter++;
    return (counter);
}

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t src_len;
    size_t offset;

    src_len = ft_strlen(src);
    offset = 0;
    // Por si dst no tiene '\0' lo cuento así:
    while (dst[offset] != '\0' && offset < size)
        offset++;
    if (size <= offset)
        return (size + src_len);
    i = 0;
    while(src[i] != '\0' && i < size - offset - 1)
    {
        dst[offset + i] = src[i];
        i++;
    }
    dst[offset + i] = '\0';
    return (src_len + offset);
}

int main()
{
    char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
    int size = 14;
    char buffer[size];

    strcpy(buffer,first);
    r = ft_strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}