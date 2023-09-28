/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsisco-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:53:56 by rsisco-l          #+#    #+#             */
/*   Updated: 2023/09/15 13:59:53 by rsisco-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst_cpy;

	if (!dst && !src)
		return (NULL);
	if (n == 0)
		return (dst);
	dst_cpy = (char *)dst;
	while (n--)
		*dst_cpy++ = *(char *)src++;
	return (dst);
}
