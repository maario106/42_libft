#include "libft.h"

int ft_tolower(int c)
{
    int tolower;

    tolower = 'A' - 'a';
    if (c >= 'A' && c <= 'Z')
        return (c - tolower);
    else
        return (c);
}