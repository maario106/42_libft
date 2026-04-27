# include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	counter;

	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	counter = 0;
	while (s[start] != '\0' && counter < len)
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