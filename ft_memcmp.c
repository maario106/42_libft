#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;
	size_t			i;

	if (n == 0)
		return (0);
	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n && ptr_s1[i] == ptr_s2[i])
		i++;
	if (i == n)
		return (0);
	return (ptr_s1[i] - ptr_s2[i]);
}

#include <stdio.h>

int main() {
    int res = 0;
    char s1[10] = "geeks";
    char s2[10] = "geeksa";

    // Use memcmp() to compare s1 and s2 up to
  	// length of s1
    res = memcmp(s1, s2, strlen(s2));

    // Check the result of memcmp
    if (res > 0)
        printf("s1 is greater:%d\n", res);
    else if (res < 0)
        printf("s2 is greater:%d\n", res);
    else
        printf("both are equal:%d\n", res);

    return 0;
}