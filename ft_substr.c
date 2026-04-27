# include "libft.h"

size_t  ft_strlen(const char *s)
{
    size_t counter;

    counter = 0;
    while (s[counter] != '\0')
        counter++;
    return (counter);
}

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*ptr;
	size_t	counter;

	size = ft_strlen(s);
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	counter = 0;
	while (counter < size)
	{
		ptr[counter] = s[counter];
		counter++;
	}
	ptr[counter] = '\0';
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	size;
	size_t	counter;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start >= size)
		return (ft_strdup(""));
	if (size - start < len)
		len = size - start;
	ptr = (char *) malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	counter = 0;
	while (s[start + counter] != '\0' && counter < len)
	{
		ptr[counter] = s[start + counter];
		counter++;
	}
	ptr[counter] = '\0';
	return (ptr);
}

#include <stdio.h>

int main(void)
{
	char *str = "buenas1234";

	printf("substr: %s\n", ft_substr(str, 4, 5));

	return (0);
}