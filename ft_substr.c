/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsisco-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:38:46 by rsisco-l          #+#    #+#             */
/*   Updated: 2023/09/15 12:38:48 by rsisco-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subptr;
	size_t	lencpy;
	size_t	s_len;

	lencpy = len;
	s_len = ft_strlen(s);
	if (s_len < start)
		return (ft_strdup(""));
	subptr = malloc(len * sizeof(char) + 1);
	if (subptr == 0)
		return (ft_strdup(""));
	while (len--)
	{
		*subptr++ = s[start];
		start++;
	}
	*subptr = '\0';
	return (subptr - lencpy);
}
