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

	ptr = malloc(count * size);
	if (ptr != 0)
	{
		char_ptr = (char *)ptr;
		while (count--)
		{
			*char_ptr = 0;
			char_ptr++;
		}
	}
	else
		return (0);
	return (ptr);
}
