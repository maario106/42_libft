/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosas-n <mrosas-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:56:43 by codespace         #+#    #+#             */
/*   Updated: 2026/05/17 17:17:27 by mrosas-n         ###   ########.fr       */
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

static void	free_split(char **ptr, int n)
{
	while (n--)
		free(ptr[n]);
	free(ptr);
}

static int	iterate_word(char const *s, char c)
{
	int	size;

	size = 0;
	if (!s)
		return (-1);
	while (*s && *s != c)
	{
		size++;
		s++;
	}
	return (size);
}

static int	count_words(char const *s, char c)
{
	int	nwords;
	int word_len;
	
	if (!s)
		return (0);
	nwords = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		word_len = iterate_word(s, c);
		if (word_len > 0)
		{
			nwords++;
			s += word_len;
		}
	}
	return (nwords);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int 	word_len;
	int 	ptr_index;
	
	if (!s)
		return (NULL);
	ptr = (char **) malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!ptr)
		return (NULL);
	ptr_index = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		word_len = iterate_word(s, c);
		if (word_len > 0)
		{
			ptr[ptr_index] = ft_substr(s, 0, word_len);
			if (!ptr[ptr_index++])
				return (free_split(ptr, ptr_index - 1), NULL);
			s += word_len;
		}
	}
	ptr[ptr_index] = NULL;
	return (ptr);
}

int main()
{
	char *str = "pues genial entonces qué meravilla";
	char c = 'e';
	char **split;
	int i;


	printf("[%s]\n\n", str);
	printf("Nwords: %d\n", count_words(str, c));

	split = ft_split(str, c);
	i = 0;
	while(split[i]){
		printf("Palabra %d -> %s\n", i, split[i]);
		i++;
	}

	return (0);
}