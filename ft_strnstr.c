/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsisco-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:34:37 by rsisco-l          #+#    #+#             */
/*   Updated: 2023/09/15 12:34:50 by rsisco-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*pfound;
	const char	*needlecpy;

	if (*needle == '\0')
		return ((char *)haystack);
	while (len-- >= ft_strlen(needle))
	{
		if (*needle == *haystack)
		{
			pfound = haystack;
			needlecpy = needle;
			while (*needlecpy == *haystack && *needlecpy && len)
			{
				needlecpy++;
				haystack++;
				len--;
			}
			if (*needlecpy == '\0')
				return ((char *)pfound);
		}
		haystack++;
	}
	return (0);
}
