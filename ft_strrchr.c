/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosas-n <mrosas-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:27:38 by mrosas-n          #+#    #+#             */
/*   Updated: 2026/04/20 16:28:27 by mrosas-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	counter;	

	counter = 0;
	while (s[counter] != '\0')
		counter++;
	return (counter);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*s)
	{
		if (*s == (char)c)
			ptr = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (ptr);
}

int main()
{
   char s[] = "pero bueno pero pero bueeeeno, que amigos";
   char c = 'e';

   printf( "s=%s\t", s );
   printf( "c=%c\n", c );
   printf( "strrchr=%s\n", ft_strrchr( s, c ) );

   return 0;
}