#include "libft.h"

size_t ft_strlen(const char *s)
{
    size_t counter;

    counter = 0;
    while(s[counter] != '\0')
        counter++;
    return (counter);
}

char *ft_strchr(const char *s, int c)
{
    int i;
    size_t len;

    i = 0;
    len = ft_strlen(s) + 1;
    while (s[i] != c && i < len)
        i++;
        return (s + i);
}