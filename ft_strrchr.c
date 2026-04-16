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

char *ft_strrchr(const char *, int c)
{
    
}