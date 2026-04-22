#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s1 == *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

#include <stdio.h>

int main()
{
	char s1[] = "_ABC";
	char s2[] = "ABCE";
	printf("Resultado: %d\n", ft_strncmp(s1, s2, 3));

	return (0);
}