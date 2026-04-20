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
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s) + 1;
	while (s[i] != c && i < len)
		i++;
	if (i == len && c != '\0')
		return (NULL);
	else
		return ((char *)s + i);
}