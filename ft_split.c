/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:56:43 by codespace         #+#    #+#             */
/*   Updated: 2026/05/16 15:36:15 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	nwords;
	int	i;
	
	nwords = 0;
	i = 0;
	while (s[i])
	{
		if (s[i - 1] == c && s[i] == c)
			nwords++;
		s++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	*ptr;
	int		n_words;
	int		i;
	
	n_words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			
		
	}
}