/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsisco-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:37:10 by rsisco-l          #+#    #+#             */
/*   Updated: 2023/09/15 12:37:12 by rsisco-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	char	*char_ptr;
	size_t	total_size;

	total_size = count * size;
	ptr = malloc(total_size);
	if (ptr)
	{
		char_ptr = (char *)ptr;
		while (total_size--)
		{
			*char_ptr = 0;
			char_ptr++;
		}
	}
	else
		return (NULL);
	return (ptr);
}
