/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsisco-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:31:14 by rsisco-l          #+#    #+#             */
/*   Updated: 2023/09/15 12:31:17 by rsisco-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*ptr;

	ptr = (unsigned const char *)s;
	while (n--)
	{
		if (*ptr == (unsigned const char)c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
