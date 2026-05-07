/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:50:58 by codespace         #+#    #+#             */
/*   Updated: 2026/05/07 17:54:32 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	int	tolower;

	tolower = 'A' - 'a';
	if (c >= 'A' && c <= 'Z')
		return (c - tolower);
	else
		return (c);
}
