/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsisco-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:38:28 by rsisco-l          #+#    #+#             */
/*   Updated: 2023/09/15 14:51:21 by rsisco-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	char	*ptr;

	size = 0;
	while (*s1)
	{
		size++;
		s1++;
	}
	ptr = (char *)malloc(size * sizeof(char) + 1);
	if (ptr == 0)
	{
		return (0);
	}
	s1 -= size;
	while (*s1)
	{
		*ptr++ = *s1++;
	}
	*ptr = '\0';
	return (ptr - size);
}
