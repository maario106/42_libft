#include "libft.h"

size_t  ft_strlen(const char *s)
{
    size_t counter;

    counter = 0;
    while (s[counter] != '\0')
        counter++;
    return (counter);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!little || little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while (big[i + j] && little[j] == big[i + j] && (i + j) < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}

#include <stdio.h>

int main(void)
{
    const char *big = "Pero bueno willy compañero";

    printf("--- TEST CASES FOR FT_STRNSTR ---\n\n");

    // 1. Normal find within bounds
    printf("1. Looking for 'Bar' in 'Foo Bar Baz' (len = 10):\n");
    printf("Result: %s\n\n", ft_strnstr(big, "willy", 16));

    // 2. Not found
    printf("2. Looking for 'hello' in 'Foo Bar Baz' (len = 11):\n");
    printf("Result: %s\n\n", ft_strnstr(big, "compa", 22));

    // 3. Found but entirely out of bounds
    printf("3. Looking for 'Baz' in 'Foo Bar Baz' (len = 5):\n");
    printf("Result: %s\n\n", ft_strnstr(big, "ro bueno", 12));

    // 4. Found but partially out of bounds
    // 'B' is at index 4 (within 5), but 'a' and 'r' fall outside.
    printf("4. Looking for 'Bar' in 'Foo Bar Baz' (len = 5):\n");
    printf("Result: %s\n\n", ft_strnstr(big, "Bar", 5));

    // 5. Empty 'little' string
    printf("5. Looking for '' (empty string) in 'Foo Bar Baz' (len = 10):\n");
    printf("Result: %s\n\n", ft_strnstr(big, "", 10));

    // 6. Len is 0
    printf("6. Looking for 'Foo' in 'Foo Bar Baz' (len = 0):\n");
    printf("Result: %s\n\n", ft_strnstr(big, "Foo", 0));

    return (0);
}