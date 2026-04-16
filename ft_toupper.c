#include "libft.h"

int ft_toupper(int c)
{
    int toupper;

    toupper = 'A' - 'a';
    if (c >= 'a' && c <= 'z')
        return (c + toupper);
    else
        return (c);
}