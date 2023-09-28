/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsisco-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:04:45 by rsisco-l          #+#    #+#             */
/*   Updated: 2023/09/15 14:44:24 by rsisco-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*to;
	const unsigned char	*from;

	to = (unsigned char *)dst;
	from = (const unsigned char *)src;
	if (from == to || len == 0)
		return (dst);
	if (to > from)
	{
		to += len;
		from += len;
		while (len--)
			*(--to) = *(--from);
	}
	else
	{
		while (len--)
			*(to++) = *(from++);
	}
	return (dst);
}
