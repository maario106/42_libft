#include "libft.h"

void bzero (void *s, size_t n)
{
    int counter;
    char *ptr;

    counter = 0;
    ptr = (char*) s;
    while(counter < n)
    {
        ptr[counter] = '\0';
        counter++;
    }
}