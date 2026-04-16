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

char *ft_strchr(const char *s, int c)
{
    size_t i;
    size_t len;

    i = 0;
    len = ft_strlen(s) + 1;
    while (s[i] != c && i < len)
        i++;
    if (i == len && c != '\0')
        return (NULL);
    else
        return ((char *)s + i);
}

int main()
{
    // define a string
    const char* str = "alssdnasdbas?";
    // define a char ch to be searched in str
    char ch = '\0';

    // Use strchr to find the first occurrence of the
    // character 's'
    const char* result = ft_strchr(str, ch);

    if (result != NULL) {
        // Calculate the position by subtracting the base
        // pointer from the result pointer
        printf("Character '%c' found at position: %ld\n",
               ch, result - str);
    }
    else {
        printf("Character '%c' not found.\n", ch);
    }

    return 0;
}